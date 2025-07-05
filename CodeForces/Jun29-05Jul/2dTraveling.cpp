//Problem: https://codeforces.com/contest/1869/problem/B
// Name: B. 2D Traveling

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<int> x(n+1), y(n+1);
    for (int i = 1; i <= n; i++){
        cin >> x[i] >> y[i];
    }

    long long direct = llabs(x[a] - x[b]) + llabs(y[a] - y[b]);
    long long flyMajorA = LLONG_MAX/2, flyMajorB = LLONG_MAX/2;
    
    
    // Looking if flying to a major citie reduces the cost
    for (int i = 1; i <= k; i++)
    {
        flyMajorA = min(flyMajorA, llabs(x[a] - x[i]) + llabs(y[a] - y[i]));
        flyMajorB = min(flyMajorB, llabs(x[b] - x[i]) + llabs(y[b] - y[i]));
    }
    cout << min(direct, flyMajorA + flyMajorB) << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}