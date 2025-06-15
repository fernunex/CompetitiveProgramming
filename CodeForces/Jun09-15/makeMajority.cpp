//Problem: https://codeforces.com/contest/1988/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, zeros, ones;
    bool zeroConsecutive = false;
    string s;

    cin >> n >> s;

    zeros = 0;
    ones = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '0' && zeroConsecutive==false){
            zeros++;
            zeroConsecutive = true;
        } else if (s[i] == '1'){
            ones++;
            zeroConsecutive = false;
        }
    }
    // cout << "Ceros: " << zeros << endl;
    // cout << "Ones: " << ones << endl;

    if (zeros >= ones){
        cout << "NO" << endl;
    } else {
        cout << "YEs" << endl;
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}