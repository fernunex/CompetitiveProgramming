//https://codeforces.com/contest/1617/problem/B

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void solve(){
    int n; cin >> n;

    
    if((n-1)&1){ //odd
        cout << n-3 << " " << 2;
    } else {
        if(( (n-1)/2)&1 ){ // +-2
            cout << (n-1)/2 + 2 << " " << (n-1)/2 - 2;
        } else{
            cout << (n-1)/2 + 1 << " " << (n-1)/2 - 1;
        }
    }
    cout << " " << 1 << "\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t; while(t--) solve();
    return 0;
}