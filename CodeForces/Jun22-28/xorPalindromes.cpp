//Problem: https://codeforces.com/contest/1867/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, goodPairs = 0, badPairs = 0, odd;
    cin >> n;

    string s, res(n + 1, '0');
    cin >> s;

    odd = n % 2;

    // Counting pairs
    for (int i = 0; i < n/2; i++){
        if (s[i] == s[n - 1 - i]){
            goodPairs++;
        } else {
            badPairs++;
        }
    }
    // cout << goodPairs << endl;
    // cout << badPairs << endl;

    // From res[badPairs] to res[goodPairs * 2] (1 in 1 if odd == 1, or 2 in 2 if odd == 2) must be 1s
    if (odd == 1){
        for (int i = badPairs; i <= (badPairs + goodPairs*2 + 1); i++){
            res[i] = '1';
        }
    } else{
        for (int i = badPairs; i <= (badPairs + goodPairs*2); i += 2){
            res[i] = '1';
        }
    }
    cout << res << endl;


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}