//Problem: https://omegaup.com/course/CodingCupSinaloa-RegistroGeneral/assignment/problemas#problems/Programando-formulas
// Name: B. Programando fórmulas raras 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    double x, y, z;
    double pi = M_PI;

    cin >> x >> y >> z;
    
    double res = (x + x*(y+z*z))/((x+pi)*(y+pi));
    // printf("%d.6\n", res);
    cout << fixed 
    << setprecision(numeric_limits<double>::max_digits10)
    << res << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    // cin>>tt;
    solve();
    return 0;
}