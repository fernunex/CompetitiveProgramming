//Problem: https://codeforces.com/contest/1957/problem/B
// Name: B. A BIT of a Construction

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    long long k;
    cin >> n >> k;

    if (n == 1){
        cout << k <<endl;
    } else {
        long long maxPower = 1LL;
        while (maxPower < k){
            maxPower *= 2;
        }
        if (maxPower > 1){
            maxPower /= 2;
        }

        // The maxPower - 1 has all (n - 1) bits set on
        cout << maxPower - 1LL << ' ' << k - (maxPower - 1LL);
        n -= 2;
        while (n--)
        {
            cout << ' ' << '0';
        }
        cout << endl;
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}