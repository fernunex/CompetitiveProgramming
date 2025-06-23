//Problem: https://codeforces.com/contest/1873/problem/E

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


void solve(){
    int n;
    ll x;

    cin >> n >> x;

    vector<ll> columns(n);

    for (int i = 0; i < n; i++){
        cin >> columns[i];
    }

    int lo = 0, hi = 2e9 + 3;
    int ans = -1;  // or 0 or lo, depending on your problem's valid domain

    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;

        // calculate how much water
        ll totalUsed = 0;
        for (int i = 0; i < n; i++){
            totalUsed += max(mid - columns[i], 0LL);
        }

        if (totalUsed <= x) {
            ans = mid;      // store current valid answer
            lo = mid + 1;   // try to find a bigger one
        } else {
            hi = mid - 1;
        }
    }

    cout << ans << endl;
}


int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}