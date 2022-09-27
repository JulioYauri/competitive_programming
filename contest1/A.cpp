#include <iostream> 
#include <vector>
#include <math.h>  
#include <algorithm> 
using namespace std;
int n;
bool solve() {
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<int> js;
    js.push_back(0);
    for(int i = 0; i < n - 1; i++) {
        js.push_back(abs(v[i + 1] - v[i]));
    }
    sort(js.begin(), js.end());
    for(int i = 0; i < n; i++) if(js[i] != i) return false;
    return true;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> n) cout << (solve() ? "Jolly\n" : "Not Jolly\n");
}