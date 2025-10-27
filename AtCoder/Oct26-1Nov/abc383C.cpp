//Problem: https://atcoder.jp/contests/abc383/tasks/abc383_c
// Name: C - Humidifier 3
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

#define vec vector
#define vi vector<int>
#define pll pair<long long, long long>
#define pii pair<int, int>
#define fi first
#define sc second
#define bg begin()
#define ed end()
#define rb rbegin()
#define rd rend()
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()
#define sll set<ll>
#define vll vector<ll>

const int dr[4] = {1, -1, 0, 0};
const int dc[4] = {0, 0, 1, -1};

int h, w, maxD,grid[1000][1000];
queue<pii> hums;

// dfs is too slow bc colliding
void dfs(int r, int c, int d){
    grid[r][c] = d;

    if (d == maxD) return;

    REP(i, 0, 4){
        if(dr[i] + r < h && dr[i] + r >= 0
            && dc[i] + c < w && dc[i] + c >= 0
            && grid[r+ dr[i]][c + dc[i]] > d+1
        ){
            dfs(r+ dr[i], c + dc[i], d+1);
        }
    }
}

void bfs(){
    while (!hums.empty())
    {
        int r = hums.front().fi;
        int c = hums.front().sc;
        hums.pop();
        REP(i, 0, 4){
            if(dr[i] + r < h && dr[i] + r >= 0
                && dc[i] + c < w && dc[i] + c >= 0
                && grid[r+ dr[i]][c + dc[i]] > grid[r][c] + 1
            ){
                grid[r+ dr[i]][c + dc[i]] = grid[r][c] + 1;
                hums.push({r+ dr[i], c + dc[i]});
            }
        }
    }
}


void solve(){
    cin >> h >> w >> maxD;

    char c;
    REP(i, 0, h) REP(j, 0, w){
        cin >> c;
        if (c == 'H'){
            grid[i][j] = 0;
            hums.push({i,j});
        } else if(c == '.'){
            grid[i][j] = maxD+1;
        } else{
            grid[i][j] = -1;
        }
    }

    // REP(i, 0, hums.size()) dfs(hums[i].fi, hums[i].sc, 0);
    bfs();

    int res = 0;
    REP(i, 0, h) REP(j, 0, w){
        // cout << grid[i][j] << " ";
        // if (j == w-1) cout << endl;
        res += (grid[i][j] >= 0 && grid[i][j] <= maxD);
    }
    cout << res << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}