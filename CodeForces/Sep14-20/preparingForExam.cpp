//Problem: C. Preparing for the Exam
// Name: https://codeforces.com/contest/2051/problem/C
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n, m, k, val;
    cin >> n >> m >> k;
    vector<bool> ms(n+1, true), ks(n+1,false);
    for (int i = 1; i <= m; i++){
        cin >> val;
        ms[val] = false;
    }
    for (int i = 1; i <= k; i++){
        cin >> val;
        ks[val] = true;
    }

    if ((n-(k-1)) > 2){
        //all zeros
        for (int i = 1; i <= m; i++){
            cout << "0";
        }
        cout << "\n";
    } else if(k==n){ // all ones
        for (int i = 1; i <= m; i++){
            cout << "1";
        }
        cout << "\n";

    } else{
        for (int i = 1; i <= n; i++)
        {
            if (ms[i] == false){
                if (ks[i]==false){
                    cout << "1";
                }else{
                    cout << "0";
                }
            }
        }
        cout << "\n";
        
    }
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