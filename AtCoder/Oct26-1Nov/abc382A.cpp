//Problem: https://atcoder.jp/contests/abc382/tasks/abc382_a
// Name: A - Daily Cookie
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
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;

    int cnt=0;
    REP(i, 0, n){
        if(s[i] == '.') cnt++;
    }
    cout << cnt + d << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}