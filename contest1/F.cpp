#include <iostream> 
#include <vector>
#include <math.h>
#include <string>   
#include <set> 
#include <algorithm> 
#define ll long long
using namespace std;
int n, q; 
vector<int> p;
int get(int a) {
    if(p[a] == a) return a;
    else return p[a] = get(p[a]);
}
void unite(int a, int b) {
    a = get(a);
    b = get(b);
    if(a == b) return;
    p[a] = b;
}
void solve() {
    cin >> n >> q; 
    p.resize(n);
    for(int i = 0; i < n; i++) p[i] = i;
    while(q--) {
        char c; cin >> c;
        if(c == '=') {
            int a, b; cin >> a >> b; 
            unite(a, b);
        }else{
            int a, b; cin >> a >> b;
            a = get(a);
            b = get(b);
            if(a == b) cout << "yes\n";
            else cout << "no\n";
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}