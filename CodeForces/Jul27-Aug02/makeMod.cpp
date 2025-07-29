//Problem: https://codeforces.com/contest/1909/problem/B
// Name: B. Make Almost Equal With Mod
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> v(n);

    bool odd=false, even=false;
    for (int i = 0; i < n; i++){
        cin >> v[i];
        if (v[i] & 1){
            odd = true;
        } else {
            even=true;
        }
    }

    if (odd && even){
        cout << "2\n";
    } else {
        int j = 2;
        while (true){
            long long val = 1ll << j;
            for (int i = 0; i < n-1; i++){
                if (v[i] %val != v[i+1]%val){
                    cout << val <<"\n";
                    return;
                }
            }
            j++;
        }


    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}