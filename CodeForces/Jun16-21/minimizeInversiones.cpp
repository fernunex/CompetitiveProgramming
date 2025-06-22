//Problem: https://codeforces.com/contest/1918/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;
    vector<pair<int,int>> miVect(n);

    for (int i = 0; i < n; i++){
        cin >> miVect[i].first;
    }

    for (int i = 0; i < n; i++){
        cin >> miVect[i].second;
    }
    sort(miVect.begin(), miVect.end());


    for (int i = 0; i < n; i++){
        cout << miVect[i].first << ' ';
    }
    cout << "\n";
        for (int i = 0; i < n; i++){
        cout << miVect[i].second << ' ';
    }
    cout << "\n";

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}

#include<iostream>
#include<string>
#include<algorithm>