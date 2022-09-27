#include <iostream>
#include <vector>  
#include <map> 
#include <string>
using namespace std;
void solve(){
    int a, b, c; cin >> a >> b >> c;
    map<int, int> moves;
    for(int i = 0; i < b; i++) {
        int beg, fin; cin >> beg >> fin;
        moves[beg] = fin;
    }
    vector<int> ans(a, 1);
    int cur = 0, flag = false;
    for(int i = 0; i < c; i++) {
        int mov; cin >> mov; 
        if(flag) continue;
        ans[cur] += mov; 
        if(moves.count(ans[cur])) ans[cur] = moves[ans[cur]];
        if(ans[cur] >= 100) {
            ans[cur] = 100;
            flag = true;
        }
        cur ++;
        if(cur >= a) cur -= a;
    }
    for(int i = 0; i < a; i++) {
        cout << "Position of player " << i + 1 << " is " << ans[i] << ".\n";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int tt; cin >> tt; 
    while(tt--) solve();
}   