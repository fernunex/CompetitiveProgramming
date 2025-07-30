//Problem: https://codeforces.com/contest/1364/problem/A
// Name: A. XXXXX
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    long long resRight= accumulate(v.begin(), v.end(), 0ll);
    long long resLeft = resRight;

    int recorte=-1;
    while (recorte < n){
        if (resRight % x != 0 || resLeft % x != 0){
            break;
        }
        recorte++;
        resRight -= v[recorte];
        resLeft -= v[n - recorte-1];
    }
    cout << n - (recorte+1) << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}