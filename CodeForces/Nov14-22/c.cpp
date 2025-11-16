// Problem https://codeforces.com/contest/2166/problem/C

// Author: Fer Nunez

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    list<ll> v;
    for(int i = 0; i < n; i++){
        ll val;
        cin >> val;
        v.push_back(val);
    };

    ll res = 0;
    auto st = v.begin(), l = v.begin(), r = v.begin();
    while(v.size() > 2){
        l = st == v.begin() ? prev(v.end()): prev(st);
        r = st == prev(v.end())? v.begin(): next(st);
        
        if (*st > *l && *l <= *r){
            st = l;
            continue;
        }
        else if(*st > *r){
            st = r;
            continue;
        }

        if(*r > *l){
            res += *l;
            v.erase(st);
            st = l;
        } else{
            res += *r;
            v.erase(st);
            st = r;
        }
    }

    cout << res + max(v.front(), v.back()) << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}