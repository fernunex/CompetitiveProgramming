//Problem: https://codeforces.com/problemset/problem/327/A
// Name: A. Flipping Game
// Author: Fer Nunez

#include<bits/stdc++.h>

using namespace std;

int main(){
    // int n, cnt=0;
    // cin >> n;
    // vector<int> v(n+1,0), left(n+1,0), right(n+1,0);
    // for(int i = 1; i <= n; i++){
    //     cin >> v[i];
    //     cnt += v[i];
    //     left[i] = cnt;
    // }

    // if(cnt == n) cout << n - 1 << endl;
    // else{
    //     int res = 0;
    //     for(int i = 1; i <= n; i++){
    //         for(int j = i; j <= n; j++){
    //             res = max(res, left[i]-left[0] + left[n]-left[j] + (j - (i - 1)) - (left[j] - left[i-1]));
    //         }
    //     }
    //     cout << res << endl;
    // }

    int n, v, cnt=0;
    cin >> n;
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> v;
        cnt += v;
        b[i] = v == 0? 1: -1;
    }

    int maxSum = b[0], currSum = 0;
    for(int i = 0; i < n; i++){
        currSum += b[i];
        if (currSum < 0) currSum = 0;
        maxSum = max(maxSum, currSum);
    }
    cout << (maxSum == 0 ? cnt - 1: cnt + maxSum) << endl;

    return 0;
}