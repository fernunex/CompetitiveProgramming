//Problem: 
// Name: 
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

    if (!(n&1)){
            cout << "No\n";
            return;
    }

    REP(i, 0, n){
        if (s[i] != '1' && i < (n/2)){
            cout << "No\n";
            return;
        }
        if (s[i] != '/' && i == n/2){
            cout << "No\n";
            return;
        }
        if (s[i] != '2' && i > n/2){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    solve();
    return 0;
}