// Author: Fer Nunez

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    ll res = 0;
    int st = 0, l, r;
    while(v.size() > 2){
        l = st - 1 < 0? v.size() - 1: st - 1;
        r = st + 1 > v.size() - 1? 0: st + 1;
        
        if (v[st] > v[l] && v[l] <= v[r]){
            st = l;
            continue;
        }
        else if(v[st] > v[r]){
            st = r;
            continue;
        }

        if(v[r] > v[l]){
            res += v[l];
            l = l > st? l-1: l;
            v.erase(v.begin() + st);
            st = l;
        } else{
            res += v[r];
            r = r > st? r-1: r;
            v.erase(v.begin() + st);
            st = r;
        }
    }
    cout << res + max(v[0], v[1]) << endl;
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}