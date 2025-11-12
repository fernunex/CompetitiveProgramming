//Problem: https://atcoder.jp/contests/abc042/tasks/abc042_b
// Name: B - Iroha Loves Strings (ABC Edition)
// Author: Fer Nunez

#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,n) for(int i = a; i < n; i++)
#define all(x) x.begin(), x.end()

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, l;
    cin >> n >> l;

    vector<string> v(n);
    REP(i, 0, n) cin >> v[i];
    sort(all(v));
    string res = "";
    REP(i, 0, n) res += v[i];
    cout << res << endl;
    
    return 0;


}