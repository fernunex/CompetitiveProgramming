//Problem: https://codeforces.com/contest/2114/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k, zeros, ones;
    string s;
    cin >> n >> k >> s;

    zeros = count(s.begin(), s.end(), '0');
    ones = count(s.begin(), s.end(), '1');

    // cout << zeros << endl;
    // cout << ones << endl;

    int min_pares, max_pares;
    min_pares = abs(zeros - ones)/2;
    max_pares = zeros/2;
    max_pares += ones/2;

    if (k == min_pares || k == max_pares){
        cout << "YES" << endl;
    } else if (k > min_pares && k < max_pares && k%2 == min_pares%2)
    {
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }

    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}