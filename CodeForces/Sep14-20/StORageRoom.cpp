//Problem: 
// Name: 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n;
    vector<vector<ll>> v;
    cin >> n;
    v.resize(n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ll val;
            cin >> val; 
            v[i].push_back(val);
        }
    }

    vector<int> res(n);
    for(int i = 0; i < n; i++){
        ll vres = INT32_MAX >> 1;
        for(int j = 0; j < n; j++){
            if (i != j) vres = vres & v[i][j];
        }
        res[i] = vres;
        // cout << vres << " ";
    }
    // cout << endl;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i != j && v[i][j] != (res[i]|res[j]) ){
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
    for(int i = 0; i < n; i++){
        cout << res[i] << " ";
    }
    cout << endl;



    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}