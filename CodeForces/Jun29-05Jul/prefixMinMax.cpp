//Problem: https://codeforces.com/contest/2123/problem/C
// Name: C. Prefix Min and Suffix Max

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<long long> v(n), res(n, 0);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    res[0] = 1;
    res[n-1] = 1;
    int i = 0;
    while (i + 1 < n)
    {
        if (v[i] < v[i + 1]) break;
        res[i + 1] = 1;
        i++;
    }

    i = n - 1;
    while (i - 1 > 0)
    {
        if (v[i] > v[i - 1]) break;
        res[i-1] = 1;
        i++;
    }

    int idx_min = min_element(v.begin(), v.end()) - v.begin();
    int idx_max = max_element(v.begin(), v.end()) - v.begin();
    
    res[idx_max] = 1;
    res[idx_min] = 1;

    for (int i = 0; i < n; i++){
        cout << res[i];
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