//Problem: https://codeforces.com/contest/1840/problem/B#

#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n, k;

    cin >> n >> k;

    // Spend all coins or buy all posible combination of the deserts
    cout << min(n + 1LL,  (1LL << (k >= 30? 30 : k))) << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}