//Problem: A. Against the Difference
// Name: https://codeforces.com/contest/2135/problem/A
// Author: Fer Nunez


#include<bits/stdc++.h>


using namespace std;


void solve(){
    int n;
    cin >> n;
    vector<int> v(n+1,0), dp(n+1,0);
    vector<vector<int>> indx(n+1);

    int va;
    for(int i = 1; i <= n; i++){
        cin >> va;
        indx[va].push_back(i);
        if(indx[va].size() >= va){
            // cout << "entro-> " << va << endl;
            dp[i] = max(dp[i-1], dp[(indx[va][indx[va].size()-va])-1] + va);
            // cout << "checkando el valor " << dp[i-1] << " vs " << dp[(indx[va][indx[va].size()-va])-1] << endl;
        }else{
            dp[i] = dp[i-1];
        }
    }
    cout << dp[n] << endl;

}


int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while(tt--) solve();
    return 0;
}