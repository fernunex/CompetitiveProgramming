//Problem: B. Begginer's Zelda
// Name: https://codeforces.com/contest/1905/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> leafs(n+1, 0);

    int val;
    for (int i = 0; i < n-1; i++){
        cin >> val;
        leafs[val] = leafs[val] + 1;
        cin >> val;
        leafs[val] = leafs[val] + 1;
    }

    int lef = 0;
    for (int i = 1; i <= n; i++){
        if (leafs[i] == 1){
            lef++;
        }
    }

    cout << (lef+1)/2 << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}