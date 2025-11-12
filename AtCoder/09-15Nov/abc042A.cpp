//Problem: https://atcoder.jp/contests/abc042/tasks/abc042_a
// Name: A - Iroha and Haiku (ABC Edition)
// Author: Fer Nunez

#include<bits/stdc++.h>

using namespace std;

#define REP(i,a,n) for(int i = a; i < n; i++)


int main(){
    cin.tie(0)-> sync_with_stdio(0);
    vector<int> val(11,0); 
    int v1;
    cin >> v1;
    val[v1]++;
    cin >> v1;
    val[v1]++;
    cin >> v1;
    val[v1]++;

    if(val[5] == 2 && val[7] == 1) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}