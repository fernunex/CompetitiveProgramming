//Problem: https://codeforces.com/contest/1987/problem/C
// Name: C. Basil's Garden
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n, val;
    cin >> n;
    vector<int> v;
    REP(i, 0, n){
        cin >> val;
        v.push_back(val);
    }

    for(int i = n-1; i > 0; i--){
        if (v[i] >= v[i-1]) v[i-1] = v[i] + 1;
    }
    cout << v[0] << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}