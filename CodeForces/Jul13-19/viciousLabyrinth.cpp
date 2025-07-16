//Problem: https://codeforces.com/contest/2078/problem/B
// Name: B. Vicious Labyrinth

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    if (n == 2){
        cout << "2 1\n";
    } else {
        if (k % 2 != 0){ // odd
            for (int i = 0; i < n - 1; i++){
                cout << n << ' ';
            }
            cout << n - 1 << endl;
        } else { // even
            for (int i = 0; i < n - 2; i++){
                cout << n - 1 << ' ';
            }
            cout << n << ' ';
            cout << n - 1 << endl;
        }
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}