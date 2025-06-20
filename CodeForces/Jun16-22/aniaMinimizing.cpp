//Problem: https://codeforces.com/contest/1230/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;

    cin >> n >> k;

    if (n == 1 && k > 0){
        cout << "0\n";
        return;
    }

    int val;
    for (int i = 0; i < n; i++){
        scanf("%1d", &val);
        // cout << val;
        if (i == 0 && k > 0 && val != 1){
            cout << "1";
            k--;
        } else if (i != 0 && val != 0 && k > 0){
                cout << "0";
                k--;
        } else {
                cout << to_string(val);
            }
        }
    cout << endl;
}

int main(){
    solve();
    return 0;
}