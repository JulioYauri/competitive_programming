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
    while(tt--) {
        int f, a; cin >> a >> f;
        vector<string> ans(2 * a - 1);
        int i = 0, j = 2 * a - 2, len = 1; 
        while(i <= j) {
            string cur = string(len, ('0' + len));
            ans[i] = ans[j] = cur;
            i++; 
            j--;
            len++;
        }   
        for(int w = 0; w < f; w++) {
            for(int ww = 0; ww < ans.size(); ww++) {
                cout << ans[ww] << "\n";
            }
            if(tt > 0) {
                cout << "\n";
                continue;
            }
            if(w != f - 1) cout << "\n";
        }
    }
}   