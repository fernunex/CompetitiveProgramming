//Problem: https://codeforces.com/contest/1692/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, val;
    cin >> n;

    unordered_set<int> myValues;
    for (int i = 0; i < n; i++){
        cin >> val;
        myValues.insert(val);
    }
    
    int no_uniques, no_duplicated;
    no_uniques = myValues.size();
    no_duplicated = n - no_uniques;
    cout << no_uniques - (no_duplicated % 2) << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}