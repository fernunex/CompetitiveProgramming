//Problem: https://codeforces.com/contest/2119/problem/B
// Name: B. Line Segments
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, px, py, qx, qy;
    cin >> n >> px >> py >> qx >> qy;
    
    double val, maxim=0.0;
    long double sum=0.0l;
    for (int i = 0; i < n; i++){
        cin >> val;
        sum += val;
        maxim = max(maxim, val);
    }

    double dis = sqrt((pow(px-qx,2))+pow(py-qy,2));

    if (n==1 && dis==sum){
        cout << "Yes\n";
    } else if (n > 1 && maxim-(sum-maxim) <= dis && sum >= dis){
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