//Problem: https://codeforces.com/contest/2130/problem/B
// Name: B. Pathless
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, s;
    cin >> n >> s;
    int val, zeros=0, ones=0, twos=0;
    
    for (int i = 0; i < n; i++){
        cin >> val;
        if (val == 0) zeros++;
        else if(val == 1) ones++;
        else twos++;
    }
    int sum = ones + twos*2;
    if (s-sum == 1 || s-sum < 0){
        for (int i = 0; i < zeros; i++) cout << "0 ";
        for (int i = 0; i < twos; i++) cout << "2 ";
        for (int i = 0; i < ones; i++) cout << "1 ";
        cout << "\n";
    } else {
        cout << "-1\n";
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}