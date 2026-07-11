//https://codeforces.com/contest/1779/problem/B

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    if (n == 3) cout << "NO";

    else if(n&1){
        int v1 = (n+1)/2 - 2, v2 = -(v1+1);

        cout << "YES\n";
        for(int i = 0; i<n; i++){
            if(i&1){
                cout << v2;
            } else {
                cout << v1;
            }
            cout << ' ';
        }
    }
    else{
        int v = 1;
        cout << "YES\n";
        for(int i = 0; i<n; i++) v *= -1, cout << v << ' ';
    }
    cout << '\n';
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; while(t--) solve();
    return 0;
}