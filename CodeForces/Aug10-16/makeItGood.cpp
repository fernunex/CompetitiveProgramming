//Problem: https://codeforces.com/contest/1385/problem/C
// Name: C. Make It Good
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int cut = n-1;
    while (cut > 0 && v[cut] <= v[cut-1]) cut--;
    while (cut > 0 && v[cut] >= v[cut-1]) cut--;
    cout << cut << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}