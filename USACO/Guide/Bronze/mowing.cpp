// https://usaco.org/index.php?page=viewproblem2&cpid=593

#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("mowing.in", "r", stdin);
    freopen("mowing.out", "w", stdout);

    vector<vector<int>> v(2004, vector(2004, -1));

    int n, res = 1004, x=1002, y=1002, s, t=0;
    char l;
    cin >> n;
    v[y][x] = t;
    for(int i = 0; i < n; i++){
        cin >> l >> s;
        if(l == 'S'){
            for(int j = 0; j < s; j++){
                t++;
                y++;
                if (v[y][x] != -1) res = min(res, t-v[y][x]);
                v[y][x] = t; 
            }
        } else if(l == 'N'){
            for(int j = 0; j < s; j++){
                t++;
                y--;
                if (v[y][x] != -1) res = min(res, t-v[y][x]);
                v[y][x] = t; 
            }
        } else if(l == 'E'){
            for(int j = 0; j < s; j++){
                t++;
                x++;
                if (v[y][x] != -1) res = min(res, t-v[y][x]);
                v[y][x] = t; 
            }
        } else if(l == 'W'){
            for(int j = 0; j < s; j++){
                t++;
                x--;
                if (v[y][x] != -1) res = min(res, t-v[y][x]);
                v[y][x] = t; 
            }
        }
    }

    cout << (res == 1004? -1 : res) << '\n';

    return 0;
}