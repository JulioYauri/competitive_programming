#include <vector> 
#include <iostream> 
#define int long long 
using namespace std; 
int lso(int a) { return (a & (-a));}
vector<vector<int> > ft(6);
vector<int> v(6); 
void update(int i, int d, int gem) {
    for(; i < ft[gem].size(); i += lso(i)) ft[gem][i] += d;
}
int rmq(int i, int gem) {
    int sum = 0;
    for(; i; i -= lso(i)) sum += ft[gem][i];
    return sum;
}
int get_total(int l, int r) {
    int sum = 0;
    for(int gem = 0; gem < 6; gem++) {
        int num = rmq(r, gem) - rmq(l - 1, gem);
        sum += num * v[gem];
    }
    return sum;
}
void solve() {
    int n, q; cin >> n >> q;
    for(int i = 0; i < 6; i++) ft[i].assign(n + 1, 0);
    for(int i = 0; i < 6; i++) cin >> v[i];
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) {
        int gem = s[i] - '1';
        update(i + 1, 1, gem);
    }
    while(q--) {
        int qq; cin >> qq;
        if(qq == 1) {
            int k, p; cin >> k >> p;
            int prev = s[k - 1] - '1';
            update(k, -1, prev);
            update(k, 1, p - 1);
            s[k - 1] = (char)('0' + p);
        }else if(qq == 2) {
            int p, v_; cin >> p >> v_;
            v[p - 1] = v_;
        }else{
            int l, r; cin >> l >> r;
            cout << get_total(l, r) << "\n";
        }
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}