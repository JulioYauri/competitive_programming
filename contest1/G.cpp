#include <iostream> 
#include <vector>
#include <math.h>
#include <string>   
#include <set> 
#include <algorithm> 
using namespace std;
int sz = (1 << 19);
vector<int> tree, ind; 
int get(int ql, int qr, int l, int r, int node) {
    if(ql <= l && qr >= r) return tree[node];
    if(ql > r || qr < l) return 0;
    int m = l + (r - l) / 2;
    return get(ql, qr, l, m, 2 * node) + get(ql, qr, m + 1, r, 2 * node + 1);
}  
void mod(int i, int n) {
    tree[i] = n;
    for(int j = i / 2; j > 0; j /= 2) tree[j] = tree[2 * j] + tree[2 * j + 1];
}
void solve() {
    int m, r; cin >> m >> r;
    ind.resize(m + 1);
    for(int i = 0; i < sz; i++) tree[i] = 0;
    for(int i = 0; i < m; i++) tree[i + (sz / 4) * 3] = 1;
    for(int i = 1; i <= m; i++) ind[i] = (sz / 4) + i - 1;
    for(int i = sz / 2 - 1; i > 0; i--) tree[i] = tree[2 * i] + tree[2 * i + 1];
    int last = (sz / 4) - 1;
    while(r--) {
        int req; cin >> req; 
        int ans = get(0, ind[req] - 1, 0, sz / 2 - 1, 1);
        cout << ans << " ";
        mod(ind[req] + sz/2, 0);
        mod(last + sz / 2, 1);
        ind[req] = last;
        last --;
    }
    cout << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt; 
    tree.resize(sz);
    while(tt--) solve();
}