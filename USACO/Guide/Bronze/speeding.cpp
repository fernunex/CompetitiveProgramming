// https://usaco.org/index.php?page=viewproblem2&cpid=568

#include<bits/stdc++.h>
using namespace std;

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n,m, t=1;
    cin >> n >> m;
    vector<int> v(101);
    for(int i = 0; i < n; i++){
        int p, q; cin >> p >> q;
        for(; p > 0; p--){
            v[t++] = q;
        }
    }

    int res = 0;
    t = 1;
    for(int i = 0; i < m; i++){
        int p, q; cin >> p >> q;
        for(; p > 0; p--){
            res = max(res, q - v[t++]);
        }
    }

    cout << res << '\n';
    return 0;
}

