//Problem: 
// Name: 

#include <bits/stdc++.h>

using namespace std;


void solve(){
    long long a, b, k;

    cin >> a >> b >> k;

    if (a == b || (a <= k && b <= k)){
        cout << "1\n";
    } else {
        long long gcdres= __gcd(a, b);
        if (a/gcdres <= k && b/gcdres <= k){
            cout << "1\n";
        } else {
            cout << "2\n";
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