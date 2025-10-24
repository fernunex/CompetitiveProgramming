//Problem: 
// Name: 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n;
    cin >> n;
    ll res = 0;
    vector<int> vals(n);
    REP(i, 0, n) cin >> vals[i];

    int i = 0;
    while(i < n){
        int maxPos = INT32_MIN;
        if (vals[i] > 0){
            while (i<n && vals[i] > 0)
            {
                maxPos = max(maxPos, vals[i]);
                i++;
            }
        } else{
            while (i<n && vals[i] < 0)
            {
                maxPos = max(maxPos, vals[i]);
                i++;
            }
        }
        // cout << "max: " << maxPos << endl;
        res += maxPos;
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