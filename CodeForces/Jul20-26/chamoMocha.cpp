//Problem: https://codeforces.com/contest/1975/problem/C
// Name: C. Chamo and Mocha's Array

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, res=-1, v1, v2;

    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    if (n > 2){
        vector<int> v2(3);
        for (int i = 0; i < n - 2; i++){
            v2[0] = v[i];
            v2[1] = v[i+1];
            v2[2] = v[i+2];

            sort(v2.begin(), v2.end());
            res=max(res, v2[1]);
        }
    } else {
        res= min(v[0],v[1]);
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