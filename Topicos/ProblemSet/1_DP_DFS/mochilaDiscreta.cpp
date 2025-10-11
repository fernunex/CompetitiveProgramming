//Problem: https://omegaup.com/arena/topicosad2025_1#problems/El-problema-de-la-mochila-d
// Name: B. El problema de la mochila (version discreta)
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

int n, c;
int memo[1002][502];
int p[1001], v[1001];

void solve(){
    cin >> n >> c;
    // cout << "El c: " << c << endl;
    
    REP(i, 0, n){
        cin >> p[i];
        cin >> v[i];
    }

    REP(i,0,n+1) memo[i][0] = 0;
    REP(i,0,c+1) memo[n][i] = 0;

    for (int i = n-1; i >= 0; i--){// subiendo
        for(int j = 0; j <= c; j++){ // izq a derecha
            memo[i][j] = memo[i+1][j];
            if(j - p[i] >= 0){
                memo[i][j] = max(
                    memo[i][j],
                    memo[i+1][j-p[i]] + v[i]
                );
            }

        }
    }


    cout << memo[0][c] << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--);
    solve();
    return 0;
}