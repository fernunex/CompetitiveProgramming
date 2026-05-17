// https://atcoder.jp/contests/abc068/tasks/arc079_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int> v(n+1,0);
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        if(a == 1) v[b]++;
        else if(b == n) v[a]++;
    }
    for(int i = 0; i < n; i++){
        if(v[i]>1){
            cout << "POSSIBLE\n";
            return 0;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}