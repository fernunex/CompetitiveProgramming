//Problem: https://atcoder.jp/contests/abc383/tasks/abc383_a
// Name: A - Humidifier 1
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
    int n;
    cin >> n;
    int curr = 0, t0=0, t1=0, wat;
    
    REP(i, 0, n){
        cin >> t1 >> wat;
        curr = max(curr -(t1-t0),0) + wat;
        t0 = t1;
    }
    cout << curr << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}