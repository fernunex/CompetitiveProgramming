//Problem: https://codeforces.com/contest/1941/problem/D
// Name: D. Rudolf and the Ball Game

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m, x;
    cin >> n >> m >> x;

    set<int> s1, res;
    s1.insert(x);
    int dis;
    char direction;
    for (int i = 0; i < m; i++)
    {
        res.clear();
        cin >> dis >> direction;
        for (int inicial : s1){
            if (direction == '0' || direction == '?'){
                if (inicial + dis > n){
                    res.insert(inicial+dis-n);
                } else {
                    res.insert(inicial+dis);
                }
            }
            if (direction == '1' || direction == '?'){
                if (inicial - dis > 0){
                    res.insert(inicial-dis);
                } else {
                    res.insert(inicial-dis + n);
                }
            }
        }

        s1.clear();
        s1.insert(res.begin(), res.end());
    }

    cout << res.size() << endl;
    for (int val: res){
        cout << val << " ";
    }
    cout << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}