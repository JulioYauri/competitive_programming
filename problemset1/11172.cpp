#include <iostream> 
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    while(tt--) {
        long long a, b; 
        cin >> a >> b; 
        if(a == b) cout << "=\n";
        else if(a < b) cout << "<\n";
        else cout << ">\n";
    }
}