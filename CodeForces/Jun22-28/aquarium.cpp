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

    // cout << n << endl;
    // cout << x << endl;
    // cout << columns[n-2] << endl;
    
    // Search optimal height
    ll low = 0, high = 1e9*2 + 7, mid;
    while (low < high)
    {
        mid = (low + high) / 2 + 1;
        // calculate how much water
        ll totalUsed = 0;
        for (int i = 0; i < n; i++){
            totalUsed += max(mid - columns[i], 0LL);
        }

        if (totalUsed > x){
            high = mid - 1;
        } else {
            low = mid;
        }
        // cout << mid << endl;
    }
    cout << low << endl;
    
}


int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}