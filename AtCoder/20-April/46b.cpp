//https://atcoder.jp/contests/abc046/tasks/abc046_b

#include<bits/stdc++.h>
using namespace std;

long long powexp(long long base, long long exponent) {
    long long result = 1;
    base = base;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base);
        }
        exponent = exponent >> 1;
        base = (base * base);
    }
    return result;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    cout << k * powexp(k-1, n-1) << '\n';

    return 0;
}