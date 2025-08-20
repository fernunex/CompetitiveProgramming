//Problem: https://codeforces.com/contest/1399/problem/C
// Name: C. Boats Competition
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n, val;
    cin >> n;

    map<int, int> m;
    for (int i = 0; i < n; i++) {
        cin >> val;
        m[val] += 1;
    }

    int res = 0, count, count2;
    for (int i = 2; i <= 100; i++){
        count = 0;
        count2 = 0;
        for (const auto& par : m){
                // cout << "Par.first: " << par.first << "--i:" << i << endl;
            if (par.first > i/2) break;
            if (par.first != abs(i-par.first)){
                if (m.find(abs(i-par.first)) != m.end()){
                    count += min(par.second, m[abs(i-par.first)]);
                }
            }
            else{
                count2 += par.second/2;
            }
        }
        res = max(res, count +count2);
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