//Problem: https://codeforces.com/contest/1899/problem/A

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    if ((n - 1) % 3 == 0 || (n+1) % 3 == 0){
        cout << "First\n";
    } else {
        cout << "Second\n";
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}