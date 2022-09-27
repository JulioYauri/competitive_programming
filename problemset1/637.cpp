#include <iostream>
#include <vector>  
#include <map> 
#include <string>
using namespace std;
int n; 
void solve(){
    cout << "Printing order for " << n << " pages:\n";
    int n4 = n;
    if(n % 4) {
        n4 -= n % 4;
        n4 += 4;
    }
    for(int sh = 1; sh * 4 <= n4; sh ++) {
        int beg = 2 * sh - 1;
        int ff = n4 + 1 - beg; 
        int fs = beg;
        int bf = beg + 1;
        int bs = n4 + 1 - bf;
        if(ff > n) ff = 0;
        if(fs > n) fs = 0;
        if(bf > n) bf = 0;
        if(bs > n) bs = 0;
        if(ff || fs) {
            cout << "Sheet " << sh << ", front: ";
            cout << (ff ? to_string(ff) : "Blank") << ", "; 
            cout << (fs ? to_string(fs) : "Blank") << "\n"; 
        }
        if(bf || bs) {
            cout << "Sheet " << sh << ", back : ";
            cout << (bf ? to_string(bf) : "Blank") << ", "; 
            cout << (bs ? to_string(bs) : "Blank") << "\n"; 
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> n && n) solve();
}   