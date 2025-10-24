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
#define all(v) (v).begin(), (v).end()
#define bg begin()
#define ed end()
#define rb rbegin()
#define rd rend()
#define lb lower_bound
#define ub upper_bound
#define pb push_back

void solve(){
    string s;
    cin >> s;

    int counter = 0;
    REP(i, 1, s.size()){
        if (s[i] == '|'){
            cout << counter << " ";
            counter = 0;
        } else counter++;
    }
    cout << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--) 
    solve();
    return 0;
}