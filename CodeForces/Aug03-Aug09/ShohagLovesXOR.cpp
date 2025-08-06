//Problem: https://codeforces.com/contest/2039/problem/C1
// Name: C1. Shohag Loves XOR (Easy Version)
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long x, m, ctr=0;
    cin >> x >> m;
    m = min(m, 1ll << (long long)(log2l(x))+1);
    // m = min(m, x<<1);
    // cout << "M is: "<< m << endl;

    for (int i = 1; i <= m; i++){
        if (i != x && (x%(x^i)==0 || i%(x^i)==0)) ctr++;
    }
    cout << ctr << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}