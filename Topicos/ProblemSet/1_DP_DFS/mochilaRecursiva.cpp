//Problem: https://omegaup.com/arena/topicosad2025_1#problems/El-problema-de-la-mochila-d
// Name: B. El problema de la mochila (version discreta)
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

int n, c;
int memo[1001][501];
int p[1000], v[1000];

int knapsack(int i, int r){
    if (r < 0) return -1000000;
    if (i >= n || r == 0) return 0;

    if (memo[i][r] == - 1){
        memo[i][r] = max(
            knapsack(i+1, r - p[i]) + v[i],
            knapsack(i+1, r)
        );
    }
    return memo[i][r];
}


void solve(){
    cin >> n >> c;

    REP(i, 0, n){
        cin >> p[i];
        cin >> v[i];
    }

    REP(i,0,1001) REP(j,0,501) memo[i][j] = -1;
    REP(i,0,n+1) memo[i][0] = 0;
    REP(i,0,c+1) memo[n][i] = 0;

    cout << knapsack(0, c) << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--);
    solve();
    return 0;
}