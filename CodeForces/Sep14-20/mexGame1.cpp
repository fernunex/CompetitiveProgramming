//Problem: https://codeforces.com/contest/1943/problem/A
// Name: A. MEX Game 1
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n, val;
    cin >> n;
    vector<int> frequency(n+1,0);
    for(int i = 0; i < n; i++){
        cin >> val;
        frequency[val]++;
    }

    int counter = 1;
    for(int i = 0; i <= n; i++){
        if (frequency[i] == 0){
            cout << i <<endl;
            break;
        } else if (frequency[i] == 1 && counter == 0){
            cout << i << endl;
            break;
        } else if (frequency[i] == 1 && counter == 1){
             // we spend our adventage. Chose the minimun unique.
            counter=0;
        }
    }

    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}