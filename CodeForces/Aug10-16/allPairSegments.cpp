//Problem: https://codeforces.com/contest/2019/problem/B
// Name: B. All Pairs Segments
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve(){
    int n, q;
    cin >> n >> q;
    vector<ll> v(n), queries(q);
    for (int i = 0; i < n; i++) cin >> v[i];
    for (int i = 0; i < q; i++) cin >> queries[i];

    unordered_map<ll, ll> res;
    ll gaps, cntNum;
    for (int i=0; i < n - 1; i++){
        gaps = (i+1ll)*(n - (i+1ll));
        cntNum = v[i+1] - v[i] - 1;

        if (res.find(gaps) != res.end()) res[gaps] += cntNum;
        else res[gaps] = cntNum;
    }

    ll segments;
    for (int i=0; i < n; i++){
        segments = (i-1+1ll)*(n-(i+1ll)) + (n-1ll);
        
        if (res.find(segments) != res.end()) res[segments] += 1;
        else res[segments] = 1;
    }

    for (int i = 0; i < q; i++){
        if (res.find(queries[i]) != res.end()) cout << res[queries[i]] << " ";
        else cout << "0 ";
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