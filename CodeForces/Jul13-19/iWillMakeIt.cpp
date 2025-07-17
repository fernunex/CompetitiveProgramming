//Problem: https://codeforces.com/contest/2126/problem/C
// Name: C. I Will Definitely Make It

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;

    cin >> n >> k;

    vector<int> towers(n+1);
    towers[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> towers[i];
    }

    int max = *max_element(towers.begin(), towers.end());
    int currentTower = towers[k];

    if (max == currentTower){
        cout << "YES" << endl;
        return;
    }

    sort(towers.begin(), towers.end());

    int indexIni;
    for(int i = 1; i <= n; i++){
        if (towers[i] == currentTower){
            indexIni = i;
            break;
        }
    }

    int water = 1;
    for(int i = indexIni; i < n; i++){
        int diff = towers[i+1] - towers[i];
        if ((water + diff - 1) > towers[i]){
            cout << "NO\n";
            return;
        } else {
            water += diff;
        }
    }
    cout << "YES\n";


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}