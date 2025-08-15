//Problem: https://codeforces.com/contest/1203/problem/B
// Name: B. Equal Rectangles
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n, val;
    cin >> n;

    unordered_map<ll, ll> vals(n);
    for (int i = 0; i < n*4; i++) {
        cin >> val;
        vals[val] += 1;
    };

    ll area;
    ll primero = vals.begin()->first;
    for (auto it = vals.begin(); it != vals.end(); it++){
        area = primero*(it->first);

        bool jala = true;
        for (auto sec = vals.begin(); sec != vals.end(); sec++){
            ll div = sec->first;
            ll divisor = area/div;

            if (area % div || vals.find(divisor) == vals.end() || vals[divisor] != vals[div] || vals[divisor] % 2 != 0 || vals[div] % 2 != 0){
                jala = false;
                break;
            }
        }
        if (jala){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}