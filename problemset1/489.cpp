#include <iostream>
#include <vector>  
#include <string>
#include <set> 
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int round; 
    while(cin >> round && round != -1) {
        string a, b; cin >> a >> b; 
        set<char> ss; 
        set<char> guessed; 
        for(int i = 0; i < a.size(); i++) ss.insert(a[i]);
        int fails = 0;
        bool flag = false;
        cout << "Round " << round << "\n";
        for(int i = 0; i < b.size(); i++) {
            if(ss.count(b[i]) == 0) fails++;
            else guessed.insert(b[i]);
            if(guessed.size() == ss.size()) {
                cout << "You win.\n";
                flag = true;
                break;
            }
            if(fails >= 7) {
                cout << "You lose.\n";
                flag = true;
                break;
            }
        }
        if(flag) continue;
        cout << "You chickened out.\n";
    }
}   