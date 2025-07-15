//Problem: https://codeforces.com/contest/1791/problem/G1
// Name: G1. Teleporters (Easy Version)

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, c;

    cin >> n >> c;

    vector<int> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
        v[i] += i + 1;
    };

    sort(v.begin(), v.end());

    int res = 0;
    for (int i = 0; i < n; i++){
        if (v[i] > c){
            break;
        }
        c -= v[i];
        res++;
    };

    cout <<  res << endl;


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}