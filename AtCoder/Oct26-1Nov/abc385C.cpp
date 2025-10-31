//Problem: https://atcoder.jp/contests/abc385/tasks/abc385_c
// Name: C - Illuminate Buildings
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
    int n;
    cin >> n;
    int v[n];
    REP(i, 0, n) cin >> v[i];

    int cnt = 1;
    REP(i, 0, n) REP(j, 1, n-i){
        int r = i + j;
        int b = 1;
        while (r < n)
        {
            if (v[i] != v[r]) break;
            b++;
            r += j;
        }
        cnt = max(cnt, b);
    }
    cout << cnt << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}