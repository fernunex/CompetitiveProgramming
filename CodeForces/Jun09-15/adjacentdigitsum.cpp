//Problem: https://codeforces.com/contest/2067/problem/A

#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
    int x, y;

    cin >> x >> y;

            // cout << "X:" << x <<endl;
            // cout << "Y:" << y <<endl;

    if( (x + 1 - y) % 9 == 0 and (x + 1 - y) >= 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}