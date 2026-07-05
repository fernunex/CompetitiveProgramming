//https://codeforces.com/contest/1895/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, y, k;
    cin >> x >> y >> k;

    int keyFirst = abs(y)+ abs(x-y);
    int chestFirst = abs(x) + abs(x-y) + max(abs(x-y) - k, 0);
    cout << min(keyFirst, chestFirst) << '\n';

    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; while(t--) solve();

    return 0;
}