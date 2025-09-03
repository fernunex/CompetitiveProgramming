//Problem: 
// Name: 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int precios[]={0,9,17,15};

int dp(int m){
    if (m == 0){
        return 0;
    } else {
        int valorMax=0;
        for (int i = 1; i <= m; i++){
            int res = precios[i] + dp(m-i);
            valorMax = max(valorMax, res);
        }
        cout << "M:" <<  m << "----res: " << valorMax << endl;
        return valorMax;
    }
}

void solve(){
    int a;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--) solve();
    cout << dp(3) << endl;
    return 0;
}