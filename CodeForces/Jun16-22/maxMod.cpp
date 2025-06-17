//Problem: https://codeforces.com/contest/2084/problem/A

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    if (n % 2 == 1){
        cout << n;
        for (int i = 1; i < n; i++){
            cout << ' ' << i;
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}