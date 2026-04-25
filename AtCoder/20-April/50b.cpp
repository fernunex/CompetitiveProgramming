// https://atcoder.jp/contests/abc050/tasks/abc050_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, p;
    cin >> n;
    vector<long long> v(n);
    long long tot=0, x;
    for(int i = 0; i < n; i++) cin >> v[i], tot+=v[i];

    cin >> m;
    for(int i = 0; i<m; i++){
        cin >> p >> x;
        cout << tot - v[p-1] + x << '\n';
    }

    return 0;
}