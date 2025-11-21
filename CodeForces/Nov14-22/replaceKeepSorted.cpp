//Problem: https://codeforces.com/problemset/problem/1485/B
// Name: B. Replace and Keep Sorted
// Author: Fer Nunez

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, q;
    ll k;
    cin >> n >> q >> k;
    vector<ll> v(n), low(n,0), high(n,0), middle(n,0), accum(n,0);
    
    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < n-1; i++) low[i] = (v[i] - 1) + (v[i+1] - v[i] - 1);
    for(int i = 1; i < n; i++) high[i] = (k - v[i]) + (v[i] - v[i-1] - 1);
    for(int i = 1; i < n - 1; i++) middle[i] = (v[i] - v[i-1] - 1) + (v[i + 1] - v[i] - 1);
    for(int i = 1; i < n; i++) accum[i] = middle[i];
    for(int i = 0; i < n; i++){
        accum[i] += accum[i-1];
        // cout << accum[i] << " ";
    } 


    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        
        if (r - l == 0) cout << k - 1;
        else if(r - l == 1) cout << low[l-1] + high[r-1];
        else cout << low[l-1] + high[r-1] + accum[r-1-1] - accum[l-1];
        cout << endl;
    }
}