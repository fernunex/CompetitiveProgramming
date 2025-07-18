//Problem: https://codeforces.com/contest/2096/problem/B
// Name: B. Wonderful Gloves

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;

    cin >> n >> k;

    long long res=0;
    vector<int> right(n), left(n), restantes(n);
    for (int i = 0; i < n; i++){
        cin >> right[i];
    }
    for (int i = 0; i < n; i++){
        cin >> left[i];
    }

    for (int i = 0; i < n; i++){
        res += max(right[i], left[i]);
        restantes[i] = min(right[i], left[i]);
    }

    sort(restantes.begin(), restantes.end());
    reverse(restantes.begin(), restantes.end());

    for (int i=0; i < k-1; i++){
        res+=restantes[i];
    }
    cout << res + 1 << endl;


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}