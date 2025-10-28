//Problem: https://codeforces.com/problemset/problem/189/A
// Name: A. Cut Ribbon
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

vi memo;
int n, a, b, c;


int dp(int l){
    if (l < 0) return INT32_MIN;

    if(memo[l] == -1){
        memo[l] = 1 + max(dp(l-a), max(dp(l-b), dp(l-c)));
    }
    return memo[l];
}

void solve(){
    cin >> n >> a >> b >> c;

    // memo.resize(n+1, -1);
    // memo[0] = 0;
    // cout << dp(n) << endl;

    // Iterative
    memo.resize(n+1, -1000000);
    memo[0] = 0;
    REP(i, 1, n+1){
        if(i-a >= 0) memo[i] = max(memo[i], memo[i-a] + 1);
        if(i-b >= 0) memo[i] = max(memo[i], memo[i-b] + 1);
        if(i-c >= 0) memo[i] = max(memo[i], memo[i-c] + 1);
    }

    cout << memo[n] << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}