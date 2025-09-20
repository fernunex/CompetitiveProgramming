//Problem: https://codeforces.com/contest/1514/problem/B
// Name: B. AND 0, Sum Big
// Author: Fer Nunez

#include <bits/stdc++.h>

#define MOD_PRIME 1000000007

using namespace std;
using ll = long long;

// Function to calculate power of a number
ll power(ll x,  ll y, ll p)
{
    int res = 1;
    x = x % p;
    if (x == 0)
        return 0;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

void solve(){
    ll n, k;
    cin >> n >> k;
    ll res = power(n,k, MOD_PRIME);
    cout << res << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}

#include<iostream>
#include<string>
#include<algorithm>