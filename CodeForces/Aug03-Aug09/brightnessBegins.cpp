//Problem: https://codeforces.com/contest/2020/problem/B
// Name: B. Brightness Begins
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long k, n, res;
    cin >> k;


    long long left = 1, right = 2e18;
    while (right-left > 1)
    {
        long long mid = (left + right) >> 1;
        n = mid - (long long) (sqrtl(mid));

        if (n < k){
            left =  mid;
        } else {
            right = mid;
        }
        // if (n >= k){
        //     right =  mid;
        // } else {
        //     left = mid;
        // }
    }
    cout << right << endl;
    

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}