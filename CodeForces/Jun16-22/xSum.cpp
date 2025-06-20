//Problem: https://codeforces.com/contest/1676/problem/D

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;

    cin >> n >> m;

    // cout << n << endl;
    // cout << m << endl;

    // Reading the board
    vector<vector<int>> matrix(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    // cout << matrix[2][2] << endl;
    // return;

    long long max_sum = -1;
    // Calculating the sum for every cell
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){

            long long suma = matrix[i][j];
            // Check up-right
            int iBack = i;
            int jBack = j;
            while (--iBack >= 0 && --jBack >= 0)
            {
                suma += matrix[iBack][jBack];
            }
            
            // Check up-left
            iBack = i;
            jBack = j;
            while (--iBack >= 0 && ++jBack < m)
            {
                suma += matrix[iBack][jBack];
            }

            // Check down-right
            iBack = i;
            jBack = j;
            while (++iBack < n && ++jBack < m)
            {
                suma += matrix[iBack][jBack];
            }

            // Check down-left
            iBack = i;
            jBack = j;
            while (++iBack < n && --jBack >= 0)
            {
                suma += matrix[iBack][jBack];
            }

            max_sum = max(max_sum, suma);
        }
    }

    cout << max_sum << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}

#include<iostream>
#include<string>
#include<algorithm>