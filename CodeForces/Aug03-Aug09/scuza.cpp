//Problem: https://codeforces.com/contest/1742/problem/E
// Name: E. Scuza
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void solve(){
    int n, q;
    
    cin >> n >> q;
    
    vector<int> stairs(n), queries(q);
    for (int i = 0; i < n; i++) cin >> stairs[i];
    for (int i = 0; i < q; i++) cin >> queries[i];


    vector<ll> pre(n);
    pre[0] = stairs[0];
    for (int i = 1; i < n; i++) pre[i] = pre[i-1]+stairs[i];

    vector<int> queries2(queries.begin(), queries.end());

    sort(queries2.begin(), queries2.end());

    int last=-1;
    unordered_map<int, ll> res;
    for (int i = 0; i < q; i++){

        while (last < n-1 && queries2[i] >= stairs[last+1]){
            last++;
        }
        if (last == -1){
            res[queries2[i]] = 0;
        } else {
            res[queries2[i]] = pre[last];
        }
    }

    for (int i = 0; i < q; i++){
        cout << res[queries[i]] << " ";
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