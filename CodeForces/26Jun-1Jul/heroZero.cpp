// https://codeforces.com/contest/1175/problem/A
#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

void solve(){
    long long n, k, res=0;
    cin >> n >> k;
    
    long long modu;
    while(n){
        modu = (n%k);
        res += modu;
        n -= modu;
        if(n){
            n /= k;
            res++;
        }
    }
    cout << res << '\n';

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();		
    }

    return 0;
}