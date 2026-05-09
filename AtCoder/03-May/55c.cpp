// https://atcoder.jp/contests/abc055/tasks/arc069_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n >> m;

    long long tot;
    tot = min(n, m/2);
    // cout << "tot1: " << tot << "|\n";
    m -= tot*2;
    tot += max(0ll,m/4);
    // cout << "tot2: " << tot << "|\n";

    cout << tot << '\n';


    return 0;
}