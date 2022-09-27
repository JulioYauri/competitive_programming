#include <iostream>
#include <vector>  
#include <string>
using namespace std;
void solve() {
    char c; cin >> c; 
    int m, n; cin >> m >> n;
    if(c == 'K') {
        cout << ((m + 1) / 2) * ((n + 1) / 2) << "\n";
        return;
    }
    if(c == 'r') {
        cout << min(m, n) << "\n";
        return;
    }
    if(c == 'k') cout << (m * n + 1) / 2 << "\n";
    else{
        if(m < n) swap(m, n);
        if(m == n) {
            if(n == 2) cout << "1\n";
            if(n == 3) cout << "2\n";
            return;
        }
        cout << min(m, n) << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt; 
    while(tt--) solve();
}   