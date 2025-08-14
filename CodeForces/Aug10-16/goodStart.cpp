//Problem: https://codeforces.com/contest/2113/problem/B
// Name: B. Good Start
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int w, h, a, b, x1, y1, x2, y2;
    cin >> w >> h >> a >> b >> x1 >> y1 >> x2 >> y2;
    
    if (x1 == x2){
        if (abs(y1-y2)%b == 0) cout << "YES\n";
        else cout << "NO\n";
    } else if (y1 == y2){
        if (abs(x1-x2)%a == 0) cout << "YES\n";
        else cout << "NO\n";
    } else if (abs(x1-x2)%a == 0 || abs(y1-y2)%b == 0){
        cout << "YES\n";
    } else cout << "NO\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}