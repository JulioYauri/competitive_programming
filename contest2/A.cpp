#include <vector> 
#include <iostream> 
#define int long long
using namespace std; 
int lso(int a) { return (a & (-a));}
vector<int> ft; 
void update(int i, int d) {
    for(; i < ft.size(); i += lso(i)) ft[i] += d;
}
int rmq(int i) {
    int sum = 0;
    for(; i; i -= lso(i)) sum += ft[i];
    return sum;
}
void solve() {
    int n, q; cin >> n >> q;
    ft.assign(n + 1, 0);
    while(q--) {
        char c; cin >> c;
        if(c == '+') {
            int a, b; cin >> a >> b; 
            update(a + 1, b);
        }else{
            int a; cin >> a;
            cout << rmq(a) << "\n";
        }
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}