//Problem: https://omegaup.com/arena/topicosad2025_1?fromLogin#problems/Nebulosos
// Name: I. Nebulosas 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)


int foto[510][510];
bool visited[510][510];
int n, m, k, maxi = -1;
int co = 0;

const int dirRow[4] = {1, -1, 0, 0};
const int dirCol[4] = {0, 0, 1, -1};

int dfs(int row, int col){
    // cout << "num: " << co++ << endl;
    int res = 1;
    int colBackup = foto[row][col];
    foto[row][col] = -1;

    // Down
    if(row + 1 < n){
        if (foto[row+1][col] != -1 && (abs(foto[row+1][col]-colBackup) <= k)){
            res += dfs(row+1, col);
        }
    }

    // Up
    if (row - 1 >= 0){
        if (foto[row-1][col] != -1 && (abs(foto[row-1][col]-colBackup) <= k)){
            res += dfs(row-1, col);
        }
    }

    // Right
    if(col + 1 < m){
        if (foto[row][col+1] != -1 && (abs(foto[row][col+1]-colBackup) <= k)){
            res += dfs(row, col+1);
        }

    }

    // Left
    if(col - 1 >= 0){
        if (foto[row][col-1] != -1 && (abs(foto[row][col-1]-colBackup) <= k)){
            res += dfs(row, col-1);
        }
    }

    return res;
}


int bfs(int row, int col){
    queue<pair<int, int>> q;
    q.push(make_pair(row, col));
    visited[row][col] = true;
    int ctr = 1;

    while (!q.empty()){
        int rowCurr = q.front().first;
        int colCurr = q.front().second;
        q.pop();

        REP(i,0, 4){
            int rowNeig = dirRow[i] + rowCurr;
            int colNeig = dirCol[i] + colCurr;
            if( rowNeig >= 0 && rowNeig < n
                && colNeig >= 0 && colNeig < m
                && !visited[rowNeig][colNeig]
                && foto[rowCurr][colCurr] - foto[rowNeig][colNeig] <= k
            ){
                // cout << "Entor\n";
                visited[rowNeig][colNeig] = true;
                q.push(make_pair(rowNeig, colNeig));
                ctr++;
            }
        }
    }
    return ctr;
}


void solve(){
    cin >> n >> m >> k;
    int row_maxi, col_maxi;

    REP(i, 0, n) REP(j, 0, m){
        cin >> foto[i][j];
        if (foto[i][j] > maxi){
            maxi = foto[i][j];
            row_maxi = i;
            col_maxi = j;
        }
    }

    REP(i,0,510) REP(j, 0, 510) visited[i][j] = false;
    
    // cout << "row: " << row_maxi << " col:" << col_maxi << endl;
    cout << bfs(row_maxi, col_maxi) << endl;

    // cout << dfs(row_maxi, col_maxi) << endl;
    // cout << "Jalando" << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--)
    solve();
    return 0;
}