//Problem: A. Only One Digit
// Name: https://codeforces.com/contest/2126/problem/A

#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    int x;
    cin >> x;

    s = to_string(x);

    int res = INT32_MAX;
    for (int i = 0; i < s.size(); i++){
        int digit = s[i] - '0';
        if (digit < res){
            res = digit;
        }
    }

    if (res != INT32_MAX){
        cout << res << endl;
    } else {
        cout << x << endl;
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}