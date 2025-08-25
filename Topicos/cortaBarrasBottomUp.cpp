//Problem: 
// Name: 
// Author: Fer Nunez
// Bottom Up implementation DP

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int precios[]={0,9,17,15};
int memo[100];

void solve(){
    int a;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--) solve();
    memo[0] = 0;
    for (int i = 0; i <= 3; i++){
        memo[i] = precios[i];
        for (int j = 1; j <= i; j++){
            int res = precios[j] + memo[i-j];
            memo[i] = max(memo[i], res);
        }
    }
    cout << memo[3] << endl;
    return 0;
}