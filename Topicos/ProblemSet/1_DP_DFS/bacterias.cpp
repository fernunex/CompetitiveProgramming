//Problem: https://omegaup.com/arena/topicosad2025_1#problems/mirBacterias
// Name: C. Bacterias 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int m, n, ma[100][100];
    cin >> m >> n;

    REP(i,0,m) REP(j,0,n) cin >> ma[i][j];

    REP(i,1, m) ma[i][0] += ma[i-1][0];
    REP(i,1,n) ma[0][i] += ma[0][i-1];

    REP(i,1,m) REP(j,1,n) ma[i][j] += min(ma[i][j-1], ma[i-1][j]);

    cout << ma[m - 1][n - 1] << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    // cin>>tt;
    // while(tt--) 
    solve();
    return 0;
}