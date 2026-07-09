//https://codeforces.com/contest/1631/problem/B

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    int res = 0, step = 1, target = a[n-1], pointer = n-2;
    while(pointer >= 0){
        if(a[pointer] != target){
            res++;
            pointer -= step;
            step *= 2;
        } else{
            pointer--;
            step++;
        }
    }
    cout << res << '\n';

    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; while(t--) solve();
    
    return 0;
}