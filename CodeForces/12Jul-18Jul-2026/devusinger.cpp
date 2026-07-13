//https://codeforces.com/contest/439/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, d; cin >> n >> d;
    int sumSongs = 0;
    int song;
    for(int i = 0; i<n; i++) {cin>>song; sumSongs += song;}
    sumSongs += (n-1)*10;
    if(sumSongs > d) cout << -1 << '\n';
    else cout << (n-1)*2 + (d-sumSongs)/5 << '\n';

    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // int t; cin >> t; while(t--) 
    solve();
    return 0;
}