//Problem: https://codeforces.com/contest/1793/problem/C
// Name: C. Dora and Search
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i < n; i++){
        cin >> v[i];
    }
    int mini=1, maxi=n;

    int l=0, r=n-1;
    while ((v[l]== maxi || v[l] == mini || v[r] == maxi || v[r] == mini) && l != r){
        while ((v[l]== maxi || v[l] == mini) && l != r)
        {
            if (v[l]== maxi){
                maxi--;
                l++;
            } else {
                mini++;
                l++;
            }
        }

        while ((v[r]== maxi || v[r] == mini) && l != r)
        {
            if (v[r]== maxi){
                maxi--;
                r--;
            } else {
                mini++;
                r--;
            }
        }
    }

    if (l == r){
        cout << -1 << endl;
        return;
    }

    cout << l+1 << " " << r+1 << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}