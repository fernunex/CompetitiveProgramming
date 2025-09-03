//Problem: https://omegaup.com/course/CodingCupSinaloa-RegistroGeneral/assignment/problemas?fromLogin#problems
// Name: C. Pares e impares 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n, val,res = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> val;
        res += (val & 1);
    }
    cout << n - res << " " << res << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}