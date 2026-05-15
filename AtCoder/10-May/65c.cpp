// https://atcoder.jp/contests/abc065/tasks/arc076_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    if(abs(n-m) < 2){
        long long totn=1, totm=1, MOD = 1000000007;
        for(int i = 1; i <= n; i++){
            totn = (totn*i) % MOD;
        }
        for(int i = 1; i <= m; i++){
            totm = (totm*i) % MOD;
        }
        // cout << totn << "sadf" << totm << endl;
        cout << ((n == m)? (((totn*totm)%MOD)*2)%MOD : ((totn*totm)%MOD)) << '\n';
    }else{
        cout << 0 << '\n';
    }


    return 0;
}