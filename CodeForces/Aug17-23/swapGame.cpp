//Problem: https://codeforces.com/contest/1747/problem/C
// Name: C. Swap Game
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int minimum = *min_element(v.begin(), v.end());

    if (v[0] > minimum) cout << "Alice\n";
    else cout << "Bob\n";

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}