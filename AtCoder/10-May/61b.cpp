// https://atcoder.jp/contests/abc061/tasks/abc061_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, s;
    cin >> n >> m;
    vector<int> v(n+1,0);
    
    for(int i = 0; i < m; i++){
        cin >> s;
        v[s]++;
        cin >> s;
        v[s]++;
    }
    for(int i = 1; i <= n; i++){
        cout << v[i] << '\n';
    }

    return 0;
}