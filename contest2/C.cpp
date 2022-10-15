#include <vector> 
#include <iostream> 
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
    int m, r; cin >> m >> r;
    ft.assign(m + r + 1, 0);
    for(int i = r + 1; i <= m + r; i++) update(i, 1);
    vector<int> index(m + 1); 
    for(int i = 1; i <= m; i++) index[i] = r + i;
    while(r > 0) {
        int a; cin >> a;
        cout << rmq(index[a]) - 1 << " ";
        update(index[a], -1);
        index[a] = r; 
        update(r, 1);
        r--;
    }
    cout << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--) solve();
}