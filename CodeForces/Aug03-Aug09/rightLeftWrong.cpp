//Problem: D. Right Left Wrong 
// Name: https://codeforces.com/contest/2000/problem/D
// Author: Fer Nunez

#include <bits/stdc++.h>

using ll = long long;

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<ll> acumul(n+1,0ll);
    for (int i = 1; i <= n; i++){
        cin >> acumul[i];
        acumul[i] += acumul[i - 1];
    }

    string s;
    cin >> s;
    s = "p" + s;

    int l=1, r=n;
    ll res = 0;
    while (l < r)
    {
        if (s[l] != 'L'){
            l++;
        } else if (s[r] != 'R'){
            r--;
        } else {
            res += acumul[r] - acumul[l-1];
            l++;
            r--;
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