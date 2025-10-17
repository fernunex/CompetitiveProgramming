//Problem: https://omegaup.com/arena/topicosad2025_1?fromLogin?fromLogin#problems/Display-Led
// Name: H. Display Led
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

char display[300][300];
int r, c;

int dfs(int row, int col){
    int res = 0;
    // Down
    if(row + 1 < r){
        if (display[row+1][col] == 'X'){
            display[row+1][col] = '0';
            res++;
            res += dfs(row+1, col);
        }
    }

    // Up
    if (row - 1 >= 0){
        if (display[row-1][col] == 'X'){
            display[row-1][col] = '0';
            res++;
            res += dfs(row-1, col);
        }
    }

    // Right
    if(col + 1 < c){
        if (display[row][col+1] == 'X'){
            display[row][col+1] = '0';
            res++;
            res += dfs(row, col+1);
        }
    }

    // Left
    if(col - 1 >= 0){
        if (display[row][col-1] == 'X'){
            display[row][col-1] = '0';
            res++;
            res += dfs(row, col-1);
        }
    }
    return res;
}



void solve(){
    cin >> r >> c;

    char ch = cin.get();
    REP(i, 0, r) REP(j, 0, c+1){
        char ch = cin.get();

        if (ch == '\n'){
            continue;
        }
        display[i][j] = ch;
    }

    int res_min = INT32_MAX, res_max = INT32_MIN;
    REP(i, 0, r) REP(j, 0, c){
        if (display[i][j] == 'X'){
            int calc = 1;
            display[i][j] = '0';
            calc += dfs(i,j);
            res_min = min(res_min, calc);
            res_max = max(res_max, calc);
        }
    }

    // cout << "Jalando" << endl;
    cout << max(res_max,0) << endl << (res_min == INT32_MAX? 0: res_min) << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--) 
    solve();
    return 0;
}