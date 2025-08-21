//Problem: https://codeforces.com/contest/1904/problem/A
// Name: A. Forked!
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;

    int res = 0;
    map<pair<int,int>, int> ma;
    
    ma[make_pair(xk+a, yk+b)] += 1;
    ma[make_pair(xk+a, yk-b)] += 1;
    ma[make_pair(xk-a, yk+b)] += 1;
    ma[make_pair(xk-a, yk-b)] += 1;

    ma[make_pair(xk+b, yk+a)] += 1;
    ma[make_pair(xk+b, yk-a)] += 1;
    ma[make_pair(xk-b, yk+a)] += 1;
    ma[make_pair(xk-b, yk-a)] += 1;

    ma[make_pair(xq+a, yq+b)] += 1;
    ma[make_pair(xq+a, yq-b)] += 1;
    ma[make_pair(xq-a, yq+b)] += 1;
    ma[make_pair(xq-a, yq-b)] += 1;

    ma[make_pair(xq+b, yq+a)] += 1;
    ma[make_pair(xq+b, yq-a)] += 1;
    ma[make_pair(xq-b, yq+a)] += 1;
    ma[make_pair(xq-b, yq-a)] += 1;

    for (auto it = ma.begin(); it != ma.end(); it++){
        res = max(res, it->second);
    }

    int count=0;
    for (auto it = ma.begin(); it != ma.end(); it++){
        if (it->second == res) count++;
    }

    if (res == 1) cout << "0\n";
    else cout << count << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}