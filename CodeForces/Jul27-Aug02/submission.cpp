//Problem: https://codeforces.com/contest/2130/problem/0
// Name: A. Submission is All You Need
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    int zeros = count(v.begin(), v.end(), 0);
    int res = accumulate(v.begin(), v.end(), 0) + zeros;
    cout << res << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}