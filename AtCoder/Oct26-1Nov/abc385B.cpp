//Problem: https://atcoder.jp/contests/abc385/tasks/abc385_b
// Name: B - Santa Claus 1
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

#define vll vector<ll>
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

template<class T> T vec_min(vector<T> &v) {assert(!v.empty()); T ans = v[0]; for (auto &x: v) ans = min(ans, x); return ans;}
template<class T> T vec_max(vector<T> &v) {assert(!v.empty()); T ans = v[0]; for (auto &x: v) ans = max(ans, x); return ans;}
template<class T> T vec_sum(vector<T> &v) {assert(!v.empty()); T ans = T(0); for (auto &x: v) ans += x; return ans;}


void solve(){
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    char grd[h][w];
    
    REP(i,0,h) REP(j,0,w) cin >> grd[i][j];
    string t;
    cin >> t;

    x--;
    y--;
    int cnt = 0;
    REP(i, 0, t.size()){
        if(t[i] == 'U' && (x-1) >= 0 && grd[x-1][y] != '#'){
            x--;
        }
        if(t[i] == 'D' && (x+1) < h && grd[x+1][y] != '#'){
            x++;
        }
        if(t[i] == 'L' && (y-1) >= 0 && grd[x][y-1] != '#'){
            y--;
        }
        if(t[i] == 'R' && (y+1) < w && grd[x][y+1] != '#'){
            y++;
        }
        if(grd[x][y] == '@'){
            cnt++;
            grd[x][y] = '.';
        }
    }
    cout << x+1 << " " << y+1 << " " << cnt << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}