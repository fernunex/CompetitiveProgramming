//Problem: https://codeforces.com/contest/1203/problem/B
// Name: B. Equal Rectangles
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n;
    ll val;
    cin >> n;
    
    unordered_map<ll, ll> ma;
    set<ll> se;
    for (int i = 0; i < n*4; i++){
        cin >> val;
        ma[val] += 1;
        se.insert(val);
    }

    vector<ll> v(se.rbegin(), se.rend());
    ll area = v[0] * v[v.size()-1];
    for (int i = 0; i <= v.size()/2; i++){
        if (v[i]*v[(v.size()-1)-i] != area ||
            ma[v[i]] != ma[v[(v.size()-1)-i]] ||
            ma[v[i]] & 1){
                cout << "NO\n";
                return;
            }
    }
    cout << "YES\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}