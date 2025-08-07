//Problem: https://codeforces.com/contest/1933/problem/D
// Name: D. Turtle Tenacity: Continual Mods
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    if (v[0] != v[1]){
        cout << "YES\n";
    } else {
        for (int i = 1; i < n; i++){
            if (v[i] % v[0] > 0){
                cout << "YES\n";
                return;
            }
        }
        cout << "NO\n";
    }   


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}