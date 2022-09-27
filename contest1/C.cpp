#include <iostream> 
#include <vector>
#include <math.h>
#include <string>   
#include <set> 
#include <algorithm> 
using namespace std;
int n, m; 
void solve() {
    int ans = 0;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    set<int> s; 
    for(int i = 0; i < m; i++) {
        int a; cin >> a;
        s.insert(a);
    }
    for(int i = 0; i < n; i++) {
        int obj = a[i];
        if(s.count(obj)) ans++;
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> n >> m && (n || m)) solve();    
}