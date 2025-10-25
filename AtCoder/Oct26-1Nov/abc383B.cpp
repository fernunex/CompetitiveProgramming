//Problem: https://atcoder.jp/contests/abc383/tasks/abc383_b
// Name: B - Humidifier 2
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

void solve(){
    int h, w, d;
    cin >> h >> w >> d;
    char s[h][w];
    
    vec<pii> fl;
    
    REP(i, 0, h) REP(j, 0, w){
        cin >> s[i][j];
        if(s[i][j] == '.') fl.pb({i,j});
    }

    int res = 0;
    REP(i,0,fl.size()-1) REP(j, i+1, fl.size()){
        int cnt = 0;
        REP(k,0,h) REP(l, 0, w){
            if(s[k][l] == '.'){
                cnt += (
                    abs(fl[i].fi - k) + abs(fl[i].sc - l) <= d ||
                    abs(fl[j].fi - k) + abs(fl[j].sc - l) <= d
                );
            }
        }
        res = max(res, cnt);
    }
    cout << res << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}