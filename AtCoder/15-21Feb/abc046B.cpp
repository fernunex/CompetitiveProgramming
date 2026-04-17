// Problem: https://atcoder.jp/contests/abc046/tasks/abc046_b

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll pow_bin(ll b, ll exp){
    ll res = 1;
    while(exp > 0){
        if (exp % 2 == 1) res *= b;
        b *= b;
        exp /= 2;
    }
    return res;
}

int main(){
    ll n, k;
    cin >> n >> k;
    cout << k * pow_bin(k-1, n-1) << endl;

    return 0;
}