//Problem: https://codeforces.com/contest/1932/problem/B
// Name: B. Chaya Calendar

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    long long res = 0, v;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> v;

        if (res >= v){
            long long larg = ceil(res/v);
            long long temp = v * larg;
            if (temp <= res){
                res = v * (larg+1);
            } else {
                res = temp;
            }
        } else {
            res = v;
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