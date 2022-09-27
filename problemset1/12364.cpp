#include <iostream>
#include <vector>  
#include <string>
using namespace std;
int n; 
vector<string> r1 = {".*","*.","*.","**","**","*.","**","**","*.",".*"};
vector<string> r2 = {"**","..","*.","..",".*",".*","*.","**","**","*."};
vector<string> r3 = {"..","..","..","..","..","..","..","..","..",".."};
void solve() {
    char c; cin >> c; 
    if(c == 'S') {
        string s; cin >> s;
        for(int i = 0; i < n; i++) cout << r1[(int)(s[i] - '0')] << " \n"[i == n - 1];
        for(int i = 0; i < n; i++) cout << r2[(int)(s[i] - '0')] << " \n"[i == n - 1];
        for(int i = 0; i < n; i++) cout << r3[(int)(s[i] - '0')] << " \n"[i == n - 1];
    }else{
        vector<string> v1(n), v2(n), v3(n); 
        for(int i = 0; i < n; i++) cin >> v1[i];
        for(int i = 0; i < n; i++) cin >> v2[i];
        for(int i = 0; i < n; i++) cin >> v3[i];
        string ans = "";
        for(int i = 0; i < n; i++) {
            int ind = -1; 
            for(int j = 0; j < 10; j++) {
                if(r1[j] == v1[i] && r2[j] == v2[i] && r3[j] == v3[i]) ind = j;
            }
            ans.push_back((char)('0' + ind));
        }
        cout << ans << "\n";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> n && n) solve();
}   