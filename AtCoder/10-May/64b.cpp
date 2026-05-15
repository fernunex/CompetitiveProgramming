// https://atcoder.jp/contests/abc064/tasks/abc064_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, mi,ma, p;
    cin >> n >> mi;
    ma = mi;
    for(int i = 1; i < n; i++) cin >> p, mi = min(mi, p), ma = max(ma, p);
    cout << (ma - mi) << '\n';
    // cout << ma << endl;
    // cout << mi << endl;
    return 0;
}