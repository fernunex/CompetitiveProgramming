//Problem: https://codeforces.com/contest/2126/problem/D
// Name: D. This Is the Last Time
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;

    vector<tuple<int,int,int>> v;
    
    cin >> n >> k;
    int v1,v2,v3;
    for (int i = 0; i<n; i++){
        cin >> v1 >> v2 >> v3;
        v.push_back(make_tuple(v1,v2,v3));
    }

    sort(v.begin(), v.end());
    for (int i = 0; i < n ; i++){
        if (k >= get<0>(v[i])  && k <= get<1>(v[i])){
            k = max(k, get<2>(v[i]));
        }
    }
    cout << k << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}