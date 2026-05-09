// https://atcoder.jp/contests/abc055/tasks/abc055_b


#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    const int MOD = 1000000007;
    long long res = 1;
    for(long long i = 1; i <=n; i++){
        res = (res*i)%MOD;
    }
    cout << res << '\n';

    return 0;
}