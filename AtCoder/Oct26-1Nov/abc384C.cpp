//Problem: https://atcoder.jp/contests/abc384/tasks/abc384_c
// Name: C - Perfect Standings
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
    vec<pair<int, string>> res;
    vec<string> letter = {"A","B","C","D","E"};
    vi sco(5);
    int max = (1 << 5);
    REP(i, 0, 5) cin >> sco[i];

    REP(i, 1, max){
        pair<int, string> val = {0, ""};
        REP(j, 0, 5){
            if (i & (1 << j)){
                val.fi += sco[j];
                val.sc += letter[j];
            }
        }
        res.pb(val);
        // cout << i << ": " << val.fi << "--" << val.sc << endl;
    }

    sort(all(res), [](auto& p1, auto&p2){
        if(p1.fi == p2.fi){
            return p1.sc < p2.sc;
        } else{
            return p1.fi > p2.fi;
        }
    });

    REP(i, 0, 32){
        cout << res[i].sc << endl;
    }




}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}