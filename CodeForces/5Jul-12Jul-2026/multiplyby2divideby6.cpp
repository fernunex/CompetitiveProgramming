//https://codeforces.com/contest/1374/problem/B

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int res = 0;
        while(n != 1){
            if(n%6 == 0) n /= 6, res++;
            else if(n%3 == 0) n *= 2, res++;
            else {
                res = -1;
                break;}
        }
    cout << res << '\n';

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t; while(t--) solve();
    return 0;
}