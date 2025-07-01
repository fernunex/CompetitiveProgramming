//Problem: https://codeforces.com/contest/2123/problem/B
// Name: B. Tournament

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, j, k;

    cin >> n >> j >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if (k > 1){
        cout << "YES\n";
    } else {
        int maxim = *max_element(arr.begin(), arr.end());
        if (arr[j - 1] == maxim){
            cout << "YES\n";
        } else {
            cout << "NO\n";
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