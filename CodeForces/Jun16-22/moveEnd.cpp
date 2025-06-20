//Problem: https://codeforces.com/contest/2104/problem/B

#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<ll> vecky(n, 0);

    for (int i = 0; i < n; i++){
        cin >> vecky[i];
    }

    // Accumulated inverted and Maxes
    vector<ll> veckyAccum(n, 0);
    vector<ll> veckyMaxes(n);
    veckyAccum[0] = vecky[n-1];
    veckyMaxes[0] = vecky[0]; 
    for (int i = 1; i < n; i++){
        veckyAccum[i] = veckyAccum[i - 1] + vecky[n-1-i];
        veckyMaxes[i] = max(veckyMaxes[i-1], vecky[i]);
    }

    // Printing maxes
    cout << veckyMaxes[n-1];
    for (int i = 1; i < n - 1; i++){
        cout << " " << veckyMaxes[n-1-i] + veckyAccum[i - 1];

    }
    if (n > 1){
        cout << " " << veckyAccum[n-1];
    }
    cout << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}