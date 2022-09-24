#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt;
    for(int t = 1; t <= tt; t++) {
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        cout << "Case " << t << ": ";
        cout << *max_element(v.begin(), v.end()) << "\n";
    }
}