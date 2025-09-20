//Problem: https://codeforces.com/contest/1582/problem/B
// Name: B. Luntik and Subsequences
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    ll n, ones=0, zeros=0, val;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> val;
        if (val == 0ll){
            zeros++;
        } else if(val == 1ll){
            ones++;
        }
    }

    cout << ones * (1ll << zeros) << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}