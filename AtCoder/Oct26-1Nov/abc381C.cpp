//Problem: https://atcoder.jp/contests/abc381/tasks/abc381_c
// Name: C - 11/22 Substring
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
#define sll set<ll>
#define vll vector<ll>

void solve(){
    int n;
    string s;
    cin >> n >> s;
    s = "x" + s + "x";
    int res = 0;
    REP(i, 1, s.size()){
        if(s[i] == '/'){
            int l = i-1, r = i +1, cnt=1;
            while (s[l] == '1' && s[r] == '2'){
                cnt += 2;
                l--; r++;
            }
            res = max(res, cnt);
        }
    }
    cout << res << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}