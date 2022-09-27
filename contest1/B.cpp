#include <iostream> 
#include <vector>
#include <math.h>
#include <string>   
#include <algorithm> 
using namespace std;
string s;
vector<string> nums = {
    "",
    "BFPV",
    "CGJKQSXZ",
    "DT",
    "L",
    "MN",
    "R"     
};
void solve() {
    string ans = "";
    int n = s.size();
    char last = 'a';
    for(int i = 0; i < n; i++) {
        char cur = s[i];
        int id = -1;
        for(int id_ = 0; id_ < nums.size(); id_++) {
            if(count(nums[id_].begin(), nums[id_].end(), cur)) id = id_;
        }
        if(id != -1) {
            if('0' + id == last) continue;
            ans.push_back((char)('0' + id));
            last = '0' + id;
        }else last = 'a';
    }
    cout << ans << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> s) solve();
}