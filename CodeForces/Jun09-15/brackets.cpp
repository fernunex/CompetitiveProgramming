//Problem: https://codeforces.com/contest/2110/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    string brakets;
    cin >> brakets;

    int balanced = 0;
    for (int i = 0; i < brakets.size() - 1; i++){
        if (brakets[i] == ')'){
            balanced++;
        } else {
            balanced--;
        }

        if(brakets[i] == ')' && brakets[i+1] == '(' && balanced == 0){ // adjascent but not nested
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;

    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}