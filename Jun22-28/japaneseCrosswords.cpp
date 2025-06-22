//Problem: https://codeforces.com/contest/884/problem/B 

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;

    int totalOnes = 0, val;
    for (int i = 0; i < n; i++){
        cin >> val;
        totalOnes += val;
    }

    if ((totalOnes + n - 1) == x){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    // int tt;
    // cin>>tt;
    // while(tt--) solve();
}