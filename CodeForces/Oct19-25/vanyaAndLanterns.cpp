//Problem: https://codeforces.com/problemset/problem/492/B
// Name: B. Vanya and Lanterns
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n, l;
    double val;

    cin >> n >> l;
    set<double> s;
    REP(i, 0, n){
        cin >> val;
        s.insert(val);
    }

    double res = -1.0;
    for(auto it = s.begin(); it != s.end(); it++){
        if(next(it) != s.end()){
            res = max(res, (*next(it) - *it)/2.0);
        }
    }

    if (s.find(0) == s.end()){
        res = max(res, *s.begin());
    }
    if (s.find(l) == s.end()){
        res = max(res, l - *s.rbegin());
    }

    cout << setprecision(10) << res << endl;


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    // while(tt--) 
    solve();
    return 0;
}