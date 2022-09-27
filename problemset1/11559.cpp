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
    int n, b, h, w; 
    int mn = 1e9; 
    bool flag = false;
    while(cin >> n >> b >> h >> w) {
        mn = 1e9;
        flag = false;
        for(int hh = 0; hh < h; hh++) {
            int p; cin >> p; 
            for(int i = 0; i < w; i++) {
                int a; cin >> a;
                if(a >= n) {
                    if(n * p <= b) {
                        mn = min(mn, n * p);
                        flag = true;
                    }
                }
            }
        }
        if(flag) cout << mn << "\n";
        else cout << "stay home\n";
    }
}   