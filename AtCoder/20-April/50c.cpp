// https://atcoder.jp/contests/abc050/tasks/arc066_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long MOD = 1000000007;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, di;
    cin >> n;
    
    vector<long long> tot;
    vector<int> v(n+1, 0);
    for(int i = 0; i < n; i++){
        cin >> di;
        v[di]++;
        if(v[di] > 2 || (di & 1 && n&1) || !(di&1) && !(n&1) || 
            v[0] == 2){
            cout << 0 << '\n';
            return 0;
        }
        
        else if(v[di] == 1 && di == 0) tot.push_back(1);
        else if(v[di] == 1 && di <= n-1) tot.push_back(2);
    }

    if(tot.size() == 0){
        cout << 0 << '\n';
    } else{
        long long res=1;
        for(int i = 0; i < tot.size(); i++) res = (res%MOD * tot[i]%MOD)%MOD;
        cout << res << '\n';
    }



    return 0;
}