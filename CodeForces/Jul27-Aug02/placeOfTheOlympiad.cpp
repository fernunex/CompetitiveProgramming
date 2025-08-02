//Problem: https://codeforces.com/contest/2091/problem/D
// Name: D. Place of the Olympiad
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,m,k;
    cin >> n >> m >> k;

    long long res=n*m+5, left = 1, right = m*2, mid, cost;
    while (left <= right){
        mid = (right+left)/2;

        cost = (m/(mid+1))*mid + m%(mid+1);
        cost *= n;
        // cout << "Mid:" << mid << "--- Cost:" << cost << "--n:" << n << endl;

        if (cost < k){
            left = mid+1;
        } else {
            res=mid;
            right = mid-1;
        }
    }
    cout << res << endl;


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}