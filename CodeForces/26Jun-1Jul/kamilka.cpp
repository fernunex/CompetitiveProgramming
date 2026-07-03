//https://codeforces.com/contest/2092/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    long long maxBeauty, minBeauty;
    cin >> n >> maxBeauty;
    minBeauty = maxBeauty;
    
    for(int i = 1; i < n; i++){
        long long val; cin >> val;
        maxBeauty = max(maxBeauty, val);
        minBeauty = min(minBeauty, val);
    }

    cout << maxBeauty-minBeauty << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; while(t--) solve();
    return 0;
}