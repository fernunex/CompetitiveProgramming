//Problem: https://omegaup.com/arena/topicosad2025_1?fromLogin#problems/Concierto-de-Dr-Lira
// Name: D. Concierto de Dr. Lira 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

int n, vals[50], memo[50][50'001], maxi;

int dp(int index, int vol){
    if (vol < 0 || vol > maxi) return -1000000;
    if (index >= n) return vol;

    // return max(dp(index+1, vol + vals[index]),
    //                             dp(index+1, vol - vals[index]));

    if(memo[index][vol] == -1){
        memo[index][vol] = max(dp(index+1, vol + vals[index]),
                                dp(index+1, vol - vals[index]));
    }
    return memo[index][vol];
}

void solve(){
    int iniVol;
    cin >> n;
    
    REP(i,0,n) cin >> vals[i];
    
    cin >> iniVol >> maxi;

    // REP(i,0,n) cout << vals[i] << " " << endl;

    REP(i,0,50) REP(j,0,50'001) memo[i][j] = -1;
    
    cout << max(dp(0, iniVol), -1) << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--)
    solve();
    return 0;
}