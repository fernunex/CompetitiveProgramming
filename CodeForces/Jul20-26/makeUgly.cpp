//Problem: B. Make It Ugly
// Name: https://codeforces.com/contest/1954/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, val1, val2, counter=1;
    cin >> n >> val1;
    int res = n;

    for(int i = 0; i < n-1; i++){
        cin >> val2;
        if (val1 != val2){
            res=min(res, counter);
            counter=0;
        }else{
            counter++;
        }
    }
    res=min(res,counter);

    if (res == n || n <=2){
        cout << "-1\n";
    } else {
        cout << res << endl;
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}