//https://codeforces.com/contest/1833/problem/B

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k; cin >> n >> k;
    vector<pair<int,int>> v1(n), v2(n);
    
    for(int i = 0; i < n; i++) v1[i].first = i, cin >> v1[i].second;
    for(int i = 0; i < n; i++) v2[i].first = 0, cin >> v2[i].second;

    sort(v1.begin(), v1.end(), [](pair<int, int> a, pair<int,int> b)
    {return a.second < b.second;});
    sort(v2.begin(), v2.end(), [](pair<int, int> a, pair<int,int> b)
    {return a.second < b.second;});

    for(int i = 0; i < n; i++){
        v2[i].first = v1[i].first;
    }
    sort(v2.begin(), v2.end());
    for(int i = 0; i < n; i++){
        cout << v2[i].second << ' ';
    }
    cout << '\n';

    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t; while(t--) solve();
}