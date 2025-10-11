//Problem: https://omegaup.com/arena/topicosad2025_1?fromLogin#problems/Volando-al-cielo
// Name: F. Volando al cielo
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n, m;
    cin >> n >> m;
    ll res = LONG_LONG_MAX, memo[n][m+2];

    REP(i,0,n) REP(j,0,m+2){
        if (j==0) memo[i][j] = LONG_LONG_MAX;
        else if (j==m+1) memo[i][j] = LONG_LONG_MAX;
        else cin >> memo[i][j];
    }

    REP(i,1,n) REP(j,1,m+1) memo[i][j] += min(memo[i-1][j+1],min(memo[i-1][j-1], memo[i-1][j]));

    REP(i,1,m+1) res = min(res, memo[n-1][i]);

    cout << res << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    // cin>>tt;
    // while(tt--) 
    solve();
    return 0;
}