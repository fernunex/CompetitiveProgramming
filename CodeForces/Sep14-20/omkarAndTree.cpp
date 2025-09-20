//Problem: https://codeforces.com/contest/1583/problem/B
// Name: B. Omkar and Heavenly Tree
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n, m, v1,v2, v3;
    cin >> n >> m;
    vector<bool> used(n+1, true);

    for(int i = 0; i < m; i++){
        cin >> v1 >> v2 >> v3;
        used[v2] = false;
    }

    int res = 0;
    for (int i = 1; i <= n; i++){
        res = i;
        if (used[i]) break; 
    }

    for ( int i = 1; i <= n; i++){
        if (res != i) cout << res <<  " " << i << endl;
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}