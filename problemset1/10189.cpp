#include <iostream>
#include <vector>  
#include <string>
using namespace std;
int m, n, caso = 1;
bool ok(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}
int di[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dj[] = {-1, 0, 1, 1, -1, 1, -1, 0};
void solve() {
    vector<string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(v[i][j] == '.') v[i][j] = '0';
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(v[i][j] == '*') {
                for(int d = 0; d < 8; d++) {
                    int next_i = i + di[d];
                    int next_j = j + dj[d];
                    if(ok(next_i, next_j)) {
                        if(v[next_i][next_j] != '*') v[next_i][next_j] ++;
                    }
                }
            }
        }
    }
    if(caso > 1) cout << "\n";
    cout << "Field #" << caso++ << ":\n";
    for(int i = 0; i < n; i++) cout << v[i] << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> n >> m && (n || m)) solve();
}   