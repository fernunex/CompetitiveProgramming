//Problem: https://codeforces.com/contest/1497/problem/B
// Name: M-arrays
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m, val;
    cin >> n >> m;
    vector<int> v(m,0);
    for (int i = 0; i < n; i++){
        cin >> val;
        v[val%m]++;
    }

    int res=0;
    if (v[0] != 0) res++;
    for(int i = 1; i<m; i++){
        if (v[i] != 0){
            res += max(1, abs(v[i] - v[m-i]));
            v[i] = 0;
            v[m-i] = 0;
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