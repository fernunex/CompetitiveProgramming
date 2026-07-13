//https://codeforces.com/contest/1496/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; string s;
    cin >> n >> k >> s;
    if(k*2+1 > n){
        cout << "NO\n";
    } else {
        for(int i = 0; i < k; i++){
            if(s[i] != s[n-i-1]){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; while(t--) solve();
    return 0;
}