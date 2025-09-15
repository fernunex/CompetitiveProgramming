//Problem: https://codeforces.com/contest/1633/problem/C
// Name: C. Kill the Monster
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    double hc,dc,hm,dm,k,w,a, rest=0;
    cin >> hc >> dc >> hm >> dm >> k >> w >> a;

    while (k-rest >= 0)
    {
        if( ceil(hm/(dc+(k-rest)*w)) <= ceil((hc+(rest)*a)/dm)){
            cout << "YES\n";
            return;
        }
        rest++;
    }
    cout << "NO\n";
    

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