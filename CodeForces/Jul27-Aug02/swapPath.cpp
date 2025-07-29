//Problem: https://codeforces.com/contest/2046/problem/A
// Name: A. Swap Columns and Find a Path

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> v1(n), v2(n), v3(n);
    for (int i=0; i < n; i++){
        cin >> v1[i];
    }
    for (int i=0; i < n; i++){
        cin >> v2[i];
        v3[i] = v1[i] + v2[i];
    }

    long long res= max(v1[0], v2[0]);
    int restante = min(v1[0], v2[0]);
    for (int i = 1; i < n; i++){
        res += max(v1[i], v2[i]);
        restante = max(restante, min(v1[i], v2[i]));
    }

    cout << res + restante << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}