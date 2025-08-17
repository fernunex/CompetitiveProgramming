//Problem: https://codeforces.com/contest/1635/problem/C
// Name: C. Differential Sorting
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;

    vector<int> v(n+1);
    for (int i = 1; i <= n; i++) cin >> v[i];

    int x, y=n-1, z=n;
    while (y>0 && v[y] <= v[z])
    {
        y--;
        z--;
    }

    if (y == n-1){
        cout << "-1\n";
        return;
    }

    if (y == 0){
        cout << "0\n";
        return;
    }

    y++;
    z++;
    
    ll valueMax = 1e18;
    while (z<=n && (v[y]-v[z]) > v[y] && abs(v[y]-v[z]) < valueMax)
    {
        z++;
    }

    if (z > n){
        cout << "-1\n";
        return;
    }

    cout << y-1 << endl;
    for (int i = 1; i < y; i++){
        cout << i << " " << y << " " << z << endl;
    }
    
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}