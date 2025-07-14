//Problem: https://codeforces.com/contest/1675/problem/C
// Name: C. Detective Task

#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;

    cin >> s;

    string mask0(s.size(), '0'), mask1(s.size(), '1');

    for (int i = 0; i < s.size(); i++){
        if (s[i] == '0'){
            mask0[i] = '1';
            break;
        }
        mask0[i] = '1';
    }

    for (int i = s.size() - 1; i >= 0; i--){
        if (s[i] == '1'){
            mask1[i] = '0';
            break;
        }
        mask1[i] = '0';
    }

    int thiefs = 0;
        for (int i = 0; i < s.size(); i++){
        if (mask0[i] != mask1[i]){
            thiefs++;
        }
    }

    cout << thiefs << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}