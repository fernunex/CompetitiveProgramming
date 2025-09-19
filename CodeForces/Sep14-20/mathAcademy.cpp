//Problem: https://codeforces.com/contest/1764/problem/B
// Name: B. Doremy's Perfect Math Class
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n, v1, v2, res;
    cin >> n >> v1 >> v2;
    res = gcd(v1,v2);
    for (int i = 0; i < n-2; i++){
        cin >> v2;
        res = gcd(res, v2);
    }

    cout << v2/res << endl;


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}