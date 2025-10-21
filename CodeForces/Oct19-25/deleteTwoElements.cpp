//Problem: https://codeforces.com/contest/1598/problem/C
// Name: C. Delete Two Elements
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n, val;
    map<ll, ll> vals;
    cin >> n;

    ll sum = 0;
    REP(i, 0, n){
        cin >> val;
        sum += val;
        if (vals.find(val) == vals.end()){
            vals[val] = 1;
        } else {
            vals[val] += 1;
        }
    }

    double dif = sum  - ((double) sum/n)*(n-2);
    // cout << dif << endl;
    if (dif != (ll) dif){
        cout << 0 << endl;
    }else{
        ll res = 0, dif2 = dif;

        for(auto it = vals.begin(); it != vals.end(); it++){
            if (vals.find(dif2 - (*it).first) != vals.end()){
                if (dif2 - (*it).first == (*it).first)
                {
                    // cout << "entro aqui";
                    res += vals[(*it).first]*(vals[(*it).first]-1)/2;
                } else {
                    res += vals[dif2 - (*it).first] * vals[(*it).first];
                    // cout << vals[dif2 - (*it).first] << " x " << vals[(*it).first] << endl;
                    vals.erase(dif2 - (*it).first);
                }
            }
        }

        cout << res << endl;
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}