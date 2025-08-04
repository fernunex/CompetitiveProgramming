//Problem: https://codeforces.com/contest/1729/problem/D
// Name: D. Friends and the Restaurant
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v1(n), v2(n);
    
    for (int i=0; i < n; i++){
        cin >> v1[i];
    }
    for (int i=0; i < n; i++){
        cin >> v2[i];
    }

    for (int i=0; i < n; i++){
        v2[i] = v2[i] - v1[i];
    }
    sort(v2.begin(), v2.end());
    reverse(v2.begin(), v2.end());

    int left=0, right=n-1, res=0;
    while (left < right)
    {
        if (v2[left]+ v2[right] >= 0){
            left++;
            right--;
            res++;
        } else{
            right--;
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