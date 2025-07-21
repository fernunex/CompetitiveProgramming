//Problem: https://codeforces.com/contest/2062/problem/C
// Name: C. Cirno and Operations

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<long double> v(n);
    for (int i=0; i < n; i++){
        cin >> v[i];
    }

    if (n == 1){
        cout << v[0] << endl;
    } else {
        long double res= accumulate(v.begin(), v.end(), 0.0l) ;
        while (v.size() > 2){
            for (int i = 0; i < v.size() - 1; i++){
                v[i] = v[i+1] - v[i];
            }
            v.pop_back();
            res=max(res, abs(accumulate(v.begin(), v.end(), 0.0l)));
        }

        if ((v[0] >= 0 && v[1] <= 0) || (v[0] <= 0 && v[1] >= 0)){
            res=max(res, (long double) abs(v[0]) + abs(v[1]) );
        } else if((v[0] <= 0 && v[1] <= 0)){
            res=max(res, max((long double) abs(v[0])+v[1],  v[0]+ (long double) abs(v[1])  ) );
        }
        string ress=to_string(res);
        cout << ress.substr(0, ress.size() - 7) << endl;
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}