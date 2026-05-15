// https://atcoder.jp/contests/abc065/tasks/abc065_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c=0;
    cin >> n;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    vector<bool> vs(n+1, false);
    int i = 1;
    while(true){
        c++;
        if(v[i] == 2) break;
        else if(!vs[i]){
            vs[i] = true;
            i = v[i];
        } else{
            cout << -1 << '\n';
            return 0;
        }
    }
    cout << c << '\n';

    return 0;
}