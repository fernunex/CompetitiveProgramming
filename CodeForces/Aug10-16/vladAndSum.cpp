//Problem: https://codeforces.com/contest/1926/problem/C
// Name: C. Vlad and a Sum of Sum of Digits
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<ll> ns(200001,0);

void solve(){
    int n;
    cin >> n;
    cout << ns[n] << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;

    for (int i = 1; i <= 200000; i++){
        int val = i;
        ll res = ns[i-1];
        while (val){
            res += val % 10;
            val /= 10;
        }
        ns[i] = res;
    }

    while(tt--) solve();
    return 0;
}