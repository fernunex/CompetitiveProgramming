// https://usaco.org/index.php?page=viewproblem2&cpid=736

#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    n *= 2;
    vector<vector<char>> v(n, vector<char>(m));
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> v[i][j];

    int res = 0;
    for(int i = 0; i < m; i++){
        bool flag = true;
        for(int j = 0; j < n/2; j++){
            for(int k = n/2; k < n; k++){
                if(v[j][i] == v[k][i]) {
                    flag = false;
                    // cout << v[j][i] << "==" << v[k][i] << endl;  
                    // cout << "falso en col " << i << endl;
                    break;}
            }
        }
        // cout << "col " << i << " is " << flag << endl;
        res += flag;
    }

    cout << res << '\n';
    return 0;
}