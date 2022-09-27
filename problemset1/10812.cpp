#include <iostream>
#include <vector>  
#include <map> 
#include <string>
using namespace std;
void solve(){
    int sum, dif; cin >> sum >> dif; 
    if(sum < dif || (sum + dif) % 2) {
        cout << "impossible\n";
        return;
    }
    int a = (sum + dif) / 2;
    int b = sum - a;
    cout << a << " " << b << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt; 
    while(tt--) solve();
}   