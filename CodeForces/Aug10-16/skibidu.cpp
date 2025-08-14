//Problem: https://codeforces.com/contest/2065/problem/D
// Name: D. Skibidus and Sigma
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<ll>> v(n, vector<ll>(m+1, 0));
    vector<pair<ll,int>> ord(n);

    for (int i = 0; i < n; i++){
        for (int j = 1; j <= m; j++){
            cin >> v[i][j];
            v[i][j] += v[i][j-1];
        }
        ord.push_back(make_pair(v[i][m], i));
    }

    sort(ord.begin(), ord.end());
    reverse(ord.begin(), ord.end());

    ll sum=0, res = 0;
    for (int i = 0; i < n; i++){
        int index = ord[i].second;
        for (int j = 1; j <= m; j++){
            v[index][j] += sum;
            res += v[index][j];
        }
        sum = v[index][m];
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