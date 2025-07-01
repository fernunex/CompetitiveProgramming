//Problem: https://codeforces.com/contest/2123/problem/C
// Name: C. Prefix Min and Suffix Max

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<long long> v(n), prefijos(n), sufijos(n);

    for (int i = 0; i < n; i++){
        cin >> v[i];
    }


    // Finding prefijos
    prefijos[0] = v[0];
    for (int i = 1; i < n; i++){
        prefijos[i] = min(prefijos[i-1], v[i]);
    }

    // Finding sufijos
    sufijos[n-1] = v[n-1];
    for (int i = n-2; i >= 0; i--){
        sufijos[i] = max(v[i], sufijos[i+1]);
    }
    

    for (int i = 0; i < n; i++){
        if (v[i] == sufijos[i] || v[i] == prefijos[i]){
            cout << '1';
        } else {
            cout << '0';
        }
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