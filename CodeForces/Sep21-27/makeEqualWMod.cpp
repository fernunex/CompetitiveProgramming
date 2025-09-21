//Problem: https://codeforces.com/contest/1656/problem/C
// Name: C. Make Equal With Mod
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n;
    cin >> n;

    int val;
    set<int> vals;
    REP(i,0,n){
        cin >> val;
        vals.insert(val);
    }

    if (vals.find(1) != vals.end()){
        for(auto it = vals.begin(); it != vals.end(); it++){
            auto nextV = next(it);
            if(nextV != vals.end()){
                if (*nextV == *it + 1){
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    cout << "YES\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}