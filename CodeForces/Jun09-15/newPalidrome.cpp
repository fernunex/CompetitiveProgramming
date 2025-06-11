//Problem: https://codeforces.com/contest/1832/problem/A

#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(){
    string cadena;
    cin >> cadena;

    int mitad = cadena.size()/2 - 1;
    int inicial = 0;
    char primerCaracter = cadena[0];
    while (mitad--)
    {
        if(primerCaracter != cadena[++inicial]){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}