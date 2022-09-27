#include <iostream> 
#include <vector>
#include <math.h>
#include <string>   
#include <map> 
#include <algorithm> 
using namespace std;
void solve() {
    int n; cin >> n;
    map<string, int> cnt; 
    for(int i = 0; i < n; i++) {
        vector<string> v(5);
        for(int j = 0; j < 5; j++) cin >> v[j];
        sort(v.begin(), v.end());
        string cur = "";
        for(int j = 0; j < 5; j++) cur += v[j];
        cnt[cur] ++;
    } 
    int mx = 0, ans = 0;
    for(auto it = cnt.begin(); it != cnt.end(); it++) mx = max(mx, it -> second);
    for(auto it = cnt.begin(); it != cnt.end(); it++) {
        if(it -> second == mx) ans += mx;
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}