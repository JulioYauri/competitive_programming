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
int get(int i) {
    return rmq(i) - rmq(i - 1);
} 
void solve() {
    int n, q; cin >> n >> q;
    ft.assign(n + 1, 0);
    while(q--) {
        char c; cin >> c;
        if(c == 'F') {
            int x; cin >> x;
            int num = get(x);
            if(num == 0) update(x, 1);
            else update(x, -1);
        }else{
            int l, r; cin >> l >> r;
            cout << rmq(r) - rmq(l - 1) << "\n";
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}