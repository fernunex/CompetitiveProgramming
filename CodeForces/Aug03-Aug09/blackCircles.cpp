//Problem: https://codeforces.com/contest/2002/problem/C
// Name: C. Black Circles
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<pair<long long, long long>> vecs(n);
    for (int i = 0; i < n; i++){
        cin >> vecs[i].first >> vecs[i].second;
    }
    long long xs, ys, xt, yt;
    cin >> xs >> ys >> xt >> yt;

    long long shortestDist = INT64_MAX, disPoint = (xt-xs)*(xt-xs)+(yt-ys)*(yt-ys);
    for (int i = 0; i < n; i++){
        // cout << "DIS: " << sqrt((xt-vecs[i].first)*(xt-vecs[i].first)+(yt-vecs[i].second)*(yt-vecs[i].second)) << endl;
        // cout << "DIS: " << ((xt-vecs[i].first)*(xt-vecs[i].first)+(yt-vecs[i].second)*(yt-vecs[i].second)) << endl;
        // shortestDist = min(shortestDist, sqrtl((xt-vecs[i].first)*(xt-vecs[i].first)+(yt-vecs[i].second)*(yt-vecs[i].second)));
        shortestDist = min(shortestDist, (xt-vecs[i].first)*(xt-vecs[i].first)+(yt-vecs[i].second)*(yt-vecs[i].second));
    }

    // cout << "MIN DISp: " << disPoint << endl;

    if (shortestDist > disPoint){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}