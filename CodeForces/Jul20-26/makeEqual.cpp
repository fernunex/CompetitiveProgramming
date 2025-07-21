//Problem: https://codeforces.com/contest/1154/problem/B
// Name: B. Make Them Equal

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    set<int> s;
    int val;
    for (int i = 0; i < n; i++){
        cin >> val;
        s.insert(val);
    }

    if (s.size() == 1){
        cout << "0\n";
        return;
    } else if (s.size() == 2){
        auto it = s.begin();
        int v1, v2;
        v1 = *it++;
        v2 = *it++;
        int res = v2 - v1;
        if (!(res & 1)){
            cout << res/2 << endl;
        } else {
            cout << res << endl;
        }
    } else if(s.size() == 3){
        auto it = s.begin();
        int v1, v2, v3;
        v1 = *it++;
        v2 = *it++;
        v3 = *it++;
        int res = v2 - v1;

        if (res != v3 - v2){
            cout << "-1\n";
            return;
        }

        cout << res << endl;
        
    } else {
        cout << "-1\n";
        return;
    }




}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--) solve();
    solve();
    return 0;
}