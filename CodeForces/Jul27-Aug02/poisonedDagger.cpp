//Problem: https://codeforces.com/contest/1613/problem/C
// Name: C. Poisoned Dagger
// Author: Fer Nunez
// Editorial help: NO

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    long long h;
    cin >> n >> h;
    vector<long long> stabs(n);

    for (int i = 0; i < n; i++){
        cin >> stabs[i];
    }

    long long lo = 1,  hi = h;
    long long ans = -1;  // or 0 or lo, depending on your problem's valid domain

    while (lo <= hi) {
        long long mid = lo + (hi - lo) / 2;

        long long damage=0;
        for (int i = 0; i < n-1; i++){
            damage += min(stabs[i+1]-stabs[i], mid);
        }
        damage += mid;
        // cout << "k:" << mid << " damage:" << damage << endl;

        if (damage < h) {
            lo = mid + 1;   // try to find a bigger one
        } else {
            ans = mid;      // store current valid answer
            hi = mid - 1;
        }
    }
    cout << ans << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}