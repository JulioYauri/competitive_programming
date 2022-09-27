#include <iostream>
#include <vector>  
#include <string>
#include <map>
#include <algorithm>   
#include <numeric> 
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++) {
        vector<string> ans; 
        string cur;
        int mx = 0, r; 
        for(int i = 0; i < 10; i++) {
            cin >> cur >> r;
            if(r == mx) ans.push_back(cur);
            else if(r < mx) continue;
            else {
                mx = r;
                ans.clear();
                ans.push_back(cur);
            }
        }
        cout << "Case #" << t << ":\n";
        for(int i = 0; i < ans.size(); i++) cout << ans[i] << "\n";
    }
}   