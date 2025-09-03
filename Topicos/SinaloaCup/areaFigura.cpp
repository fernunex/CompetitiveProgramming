//Problem: https://omegaup.com/course/CodingCupSinaloa-RegistroGeneral/assignment/problemas#problems/Area-de-la-figura
// Name: A. Área de la figura 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    n =  1 + (n-1)*2;
    int res = n;
    while (n){
        n = max(0, n - 2);
        res += + n*2;
    }
    cout << res << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    solve();
    return 0;
}