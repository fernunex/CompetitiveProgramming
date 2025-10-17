//Problem: https://omegaup.com/arena/topicosad2025_1?fromLogin?fromLogin#problems/caminos
// Name: E. Caminos 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)




void solve(){
    ll h, w, memo[31][31];
    cin >> h >> w;

    REP(i,0,h+1) memo[i][0] = 1;
    REP(i,0,w+1) memo[0][i] = 1;
    REP(i,1,h+1) REP(j,1,w+1) memo[i][j] = memo[i][j-1] + memo[i-1][j];

    cout << memo[h][w] << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--) 
    solve();
    return 0;
}