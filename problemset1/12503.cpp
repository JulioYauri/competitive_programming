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
        int n; cin >> n;
        vector<int> v(n);
        string s; 
        getline(cin, s);
        for(int i = 0; i < n; i++) {
            getline(cin, s);
            if(s == "LEFT") v[i] = -1;
            else if(s == "RIGHT") v[i] = 1;
            else{
                int ind = stoi(s.substr(8, s.size() - 8)) - 1;
                v[i] = v[ind];
            }
        }
        int p = 0;
        for(int i = 0; i < n; i++) p += v[i];
        cout << p << "\n";
    }
}   