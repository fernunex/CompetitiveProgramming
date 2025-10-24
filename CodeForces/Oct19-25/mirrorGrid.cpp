//Problem: https://codeforces.com/contest/1703/problem/E
// Name: E. Mirror Grid
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));

    REP(i,0,n) REP(j,0,n){
        char dig;
        cin >> dig;
        mat[i][j] = dig - '0';
    }
    // REP(i,0,n) REP(j,0,n) cout << mat[i][j] << " ";

    int res = 0;
    REP(k, 0, n/2){
        // cout << "Entro\n";
        REP(m, 0, n-1-k*2){
            int count = 0;
            count += mat[0+k][m+k];
            count += mat[m+k][n-k-1];
            count += mat[n-k-1][n-m-k-1];
            count += mat[n-m-k-1][0+k];

            if(count == 1 || count == 3) res += 1;
            else if(count == 2) res += 2;
        }
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