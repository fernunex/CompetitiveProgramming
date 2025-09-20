//Problem: https://codeforces.com/contest/1881/problem/C
// Name: C. Perfect Square
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;


void rot90deg(vector<vector<char>>& matrix) {
    int n = matrix.size();

    // 1. Transpose the matrix
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // 2. Reverse each row
    for (int i = 0; i < n; ++i) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}


void solve(){
    int n, res=0;
    cin >> n;

    char val;
    vector<vector<char> > original(n), modified(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> val;
            original[i].push_back(val);
            modified[i].push_back(val);
        }
    }

    rot90deg(modified);

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            res += abs(original[i][j]-modified[i][j]);
            original[i][j] = max(original[i][j],modified[i][j]);
            modified[i][j] = original[i][j];
        }
    }

    rot90deg(modified);
    rot90deg(modified);

    for(int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            res += abs(original[i][j]-modified[i][j]);
            original[i][j] = max(original[i][j],modified[i][j]);
            modified[i][j] = original[i][j];
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << modified[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << endl;

    cout << res/2 << endl;
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}