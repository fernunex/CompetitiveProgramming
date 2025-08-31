//Problem: https://codeforces.com/contest/1594/problem/B
// Name: B. Special Numbers
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

long long max_mod = 1000000007ll;

long long power(long long base, int exponent) { // Or long long exponent
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) { // If exponent is odd
            result = (result * base) % max_mod;
        }
        base = (base * base) % max_mod; // Square the base
        exponent /= 2; // Halve the exponent
    }
    return result;
}


void solve(){
    int res = 0, n, k;
    cin >> n >> k;

    
    for (int i = 0; i <= 31; i++){
        if ((k >> i) & 1){
            res += power(ll(n), i) % max_mod;
            res %= max_mod;
        }
    }
    cout << res << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}