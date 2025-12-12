//https://codeforces.com/problemset/problem/1534/C
// Author: Fer Nuñez

#include<bits/stdc++.h>
using namespace std;




void solve(){
    int n;
    cin >> n;
    vector<int> up(n), down(n);
    map<int,int> upk;
    for(int i = 0; i < n; i++){
        cin >> up[i];
        upk[up[i]] = i;
    }
    for(int i = 0; i < n; i++) cin >> down[i];

    int cnt = 0;
    for(int i = 0; i < n; i++){
        int piv = i;
        cnt += (up[piv] != 0);
        while(up[piv] != 0){
            int aux = up[piv];
            up[piv] = 0;
            piv = upk[down[piv]];
        }
    }
    
    // cout << cnt <<endl;
    long long res = 1l;
    for(int i = 0; i < cnt; i++) res = (res * 2l) % (1000000007);
    cout << res << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}