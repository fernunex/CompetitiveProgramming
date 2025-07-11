//Problem: https://codeforces.com/blog/entry/116995
// Name: B. Minimize Permutation Subarrays

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x1, x2, xn;

    cin >> n;

    int val;
    for (int i = 0; i < n; i++){
        cin >> val;
        if (val == 1){
            x1 = i + 1;
        } else if (val == 2){
            x2 = i + 1;
        } else if (val == n){
            xn = i + 1;
        }
    }
    if (xn < x1 && xn < x2){
        cout << xn << ' ' << min(x1, x2)<< endl;
    } else if (xn > x1 && xn > x2){
        cout << xn << ' ' << max(x1, x2)<< endl;
    } else {
        cout << xn << ' ' << xn << endl;
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}