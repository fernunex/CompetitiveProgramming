//Problem: https://omegaup.com/arena/topicosad2025_1?fromLogin?fromLogin#problems/OMI-2020-Ovejas
// Name: J. Ovejas
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

const int MAXDIM = 1002, MAX_VALUE = 3'000'000;

int grid[MAXDIM][MAXDIM], n, q;


const int dirRow[8] = {1, -1, 0, 0, 1, 1, -1, -1};
const int dirCol[8] = {0, 0, 1, -1, 1, -1, 1, -1};

void bfs(){
    queue<pair<int, int>> qu;

    int ov_row, ov_col;
    REP(i, 0, n){
        cin >> ov_row >> ov_col;
        grid[ov_row][ov_col] = 0;
        qu.push(make_pair(ov_row, ov_col));
    }

    while(!qu.empty()){
        int rowActual = qu.front().first;
        int colActual = qu.front().second;
        qu.pop();

        REP(i, 0, 8){
            int rowNew = rowActual + dirRow[i];
            int colNew = colActual + dirCol[i];

            if (rowNew >= 0 && rowNew < MAXDIM &&
                colNew >= 0 && colNew < MAXDIM
            ){
                if(grid[rowActual][colActual] + 1 < grid[rowNew][colNew]){
                    grid[rowNew][colNew] = grid[rowActual][colActual] + 1;
                    qu.push(make_pair(rowNew, colNew));
                }
            }
        }
    }
}


void solve(){
    cin >> n >> q;


    REP(i, 0, MAXDIM) REP(j, 0, MAXDIM) grid[i][j] = MAX_VALUE;
    bfs();

    int q_row, q_col;
    REP(i, 0, q){
        cin >> q_row >> q_col;
        cout << grid[q_row][q_col] << endl;
    }

    // REP(i, 0, MAXDIM) {
    //     cout << endl;
    //     REP(j, 0, MAXDIM){
    //         cout << grid[i][j] << " ";
    //     }
    // }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--)
    solve();
    return 0;
}