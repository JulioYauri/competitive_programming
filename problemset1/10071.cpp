#include <iostream> 
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int v, t; 
    while(cin >> v >> t) {
        cout << 2 * v * t << "\n";
    }
}