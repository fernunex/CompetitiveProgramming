//https://codeforces.com/contest/1872/problem/B

#include<bits/stdc++.h>
#include <climits>
using namespace std;

void solve(){
    int n; cin >> n;
    int d, s, minK = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> d >> s;
        minK = min(minK,d+s/2 - !(s&1));
    }
    cout << minK << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; while(t--) solve();
    return 0;
}