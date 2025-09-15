//Problem: https://omegaup.com/course/CodingCupSinaloa-RegistroGeneral/assignment/problemas?fromLogin#problems/Digitos-Inteligentes--
// Name: D. Dígitos Inteligentes 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int L, R, res=0;
    cin >> L >> R;
    for (int i = L; i <= R; i++){
        int val = i;
        while (val){
            res += val%10;
            val = val/10;
        }
    }
    cout << res << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}