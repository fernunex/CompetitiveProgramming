// https://codeforces.com/contest/1972/problem/B

#include <algorithm>
#include<bits/stdc++.h>
#include <ios>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int u = count(s.begin(), s.end(), 'U');
    cout << (u&1? "YES\n": "NO\n");

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) solve();

}