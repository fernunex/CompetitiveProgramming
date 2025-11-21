//Problem: https://codeforces.com/problemset/problem/1355/B
// Name: B. Young Explorers
// Author: Fer Nunez
#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n, rs=0;
    cin >> n;

    vector<int> e(n+1,0);
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        e[val]++;
    }

    for(int i = 1; i < n; i++){
        rs += e[i]/i;
        e[i+1] += e[i] % i;
    }
    cout << rs + e[n]/n << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while(tt--) solve();

    return 0;
}