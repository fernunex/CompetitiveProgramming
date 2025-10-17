//Problem: 
// Name: G. Escape del laberinto
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

char laber[22][22];
int f, c;


void dfs(int row, int col){

    // Down
    if(row + 1 < f){
        if (laber[row+1][col] != '#'){
            laber[row+1][col] = '#';
            dfs(row+1, col);
        }
    }

    // Up
    if (row - 1 >= 0){
        if (laber[row-1][col] != '#'){
            laber[row-1][col] = '#';
            dfs(row-1, col);
        }
    }

    // Right
    if(col + 1 < c){
        if (laber[row][col+1] != '#'){
            laber[row][col+1] = '#';
            dfs(row, col+1);
        }
    }

    // Left
    if(col - 1 >= 0){
        if (laber[row][col-1] != '#'){
            laber[row][col-1] = '#';
            dfs(row, col-1);
        }
    }

    // // Up Right
    // if (row - 1 >= 0 && col + 1 < c){
    //     if (laber[row-1][col + 1] != '#'){
    //         laber[row-1][col + 1] = '#';
    //         dfs(row-1, col + 1);
    //     }
    // }

    // // Up Left
    // if (row - 1 >= 0 && col - 1 >= 0){
    //     if (laber[row-1][col - 1] != '#'){
    //         laber[row-1][col - 1] = '#';
    //         dfs(row-1, col - 1);
    //     }
    // }

    // // Down left 
    // if(row + 1 < f && col - 1 >= 0){
    //     if (laber[row+1][col - 1] != '#'){
    //         laber[row+1][col - 1] = '#';
    //         dfs(row+1, col - 1);
    //     }
    // }

    // // Down right 
    // if(row + 1 < f && col + 1 < c){
    //     if (laber[row+1][col + 1] != '#'){
    //         laber[row+1][col + 1] = '#';
    //         dfs(row+1, col + 1);
    //     }
    // }
}

void solve(){
    int fila_E, col_E, fila_S, col_S;
    cin >> f >> c;

    char ch = cin.get();
    REP(i, 0, f) REP(j, 0, c+1){
        char ch = cin.get();

        if (ch == '\n'){
            continue;
        }

        laber[i][j] = ch;
        if (laber[i][j] == 'E'){
            fila_E = i;
            col_E = j;
        } else if (laber[i][j] == 'S')
        {
            fila_S = i;
            col_S = j;
        }
    }

    // dfs(fila_E, col_E);

    // cout << "S fila: " << fila_S << " S col:" << col_S << endl; 
    // cout << "E fila: " << fila_E<< " E col:" << col_E << endl; 


    if (laber[fila_S][col_S] == '#') cout << "Si\n";
    else cout << "No\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--) 
    solve();
    return 0;
}