// https://atcoder.jp/contests/abc060/tasks/abc060_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, c;
    cin >> a >> b >> c;
    int mod = (c%b);
    // cout << "mod: " << mod << endl;

    for(long long i = a; i < 2000000ll*a; i += a){
        if(i%b == mod){cout << "YES\n"; return 0;}
    }
    cout << "NO\n";


    return 0;
}