// https://usaco.org/index.php?page=viewproblem2&cpid=963

#include<bits/stdc++.h>
using namespace std;


int main(){
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);

    int k, n;
    cin >> k >> n;
    int v[k][n];
    for(int i = 0; i < k; i++) for (int j = 0; j < n; j++) cin >> v[i][j];

    int res = 0;
    for(int p = 1; p <= n; p++){
        vector<bool> r(n+1, true);
        int c = 0;
        for(int i = 0; i < k; i++) for (int j = 0; j < n; j++){
            if (v[i][j] == p) break;
            else if(r[v[i][j]]) c++, r[v[i][j]] = false;
        }
        res += n-c-1;
    }

    cout << res << '\n';
    return 0;
}