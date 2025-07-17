//Problem: https://codeforces.com/contest/2126/problem/B
// Name: B. No Casino in the Mountains

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    int res = 0, val, counter=0;
    bool rest = false;
    for (int i=0; i<n; i++){
        cin >> val;
        if (rest == true)
        {
            rest = false;
        } else if (val == 0)
        {
            counter++;
            if (counter == k){
                res++;
                rest=true;
                counter=0;
            }
        } else{
            counter=0;
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