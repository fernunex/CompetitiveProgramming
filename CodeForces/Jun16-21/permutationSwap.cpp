//Problem: https://codeforces.com/contest/1828/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    int val, k = -1;
    for (int i = 1; i <= n; i++){
        cin >> val;
        
        if (val != i){
            if (k == -1){ // first occurrence
                k = abs(i-val);
            } else{
                k = gcd(abs(i-val), k);
            }

        }
    }
    cout << k << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}