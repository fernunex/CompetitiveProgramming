//Problem: https://codeforces.com/contest/2123/problem/D
// Name: D. Binary String Battle
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >>k;
    string s;
    cin >> s;
    int ones = count(s.begin(), s.end(), '1');
    if (k > n/2 || k >= ones){
        cout << "Alice\n";
    }else{
        cout << "Bob\n";
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}