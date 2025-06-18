//Problem: https://codeforces.com/contest/1985/problem/D

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<char>> matrix(n, vector<char>(m, 0));

    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matrix[i][j];
        }
    }

    int indexMax = 0;
    int max = 0;
    int calculado;
    for (int i = 0; i < n; i++){
        calculado = count(matrix[i].begin(), matrix[i].end(), '#');
        if (max < calculado){
            indexMax = i;
            max = calculado;
        } else if (max != 0 && max > calculado)
        {
            break;
        }
    }

    // Find where # starts
    int primerGato = 0;
    while (primerGato < m && matrix[indexMax][primerGato] != '#') primerGato++;

    cout << indexMax + 1 << " " << primerGato + max/2 + 1 << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}