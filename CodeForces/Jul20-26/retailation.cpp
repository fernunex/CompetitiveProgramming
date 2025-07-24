//Problem: https://codeforces.com/contest/2117/problem/D
// Name: D. Retaliation

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<int> v(n+1);

    for (int i=1; i <= n; i++){
        cin >> v[i];
    }

    int y = (2*v[1]-v[2])/(n+1);
    int x = y - v[1] + v[2];

    if (x < 0 || y < 0){
        cout << "NO\n";
        return;
    }
    for(int i=1; i <= n; i++){
        if (x*i + y*(n-i+1) != v[i]){
            cout << "NO\n";
            return;
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