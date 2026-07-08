//https://codeforces.com/contest/1163/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m; cin >> n >> m;
    if(n != 0 && m == 0) cout << "1\n";
    else cout << min(n-m, m) << '\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin >> t; while(t--) 
    solve();
}