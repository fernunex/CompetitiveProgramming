//Problem: https://codeforces.com/contest/1993/problem/B
// Name: B. Parity and Sum

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> pares;

    long long maxImpar = 0;
    int val;
    for (int i = 0; i < n; i++){
        cin >> val;
        if (val % 2 == 0){
            pares.push_back(val);
        } else if (val > maxImpar){
            maxImpar = val;
        }
    }

    if (pares.size() == n || pares.size() == 0){
        cout << "0\n";
    } else {
        sort(pares.begin(), pares.end());

        int res = 0;
        for (int i = 0; i < pares.size(); i++){
            if (maxImpar > pares[i]){
                maxImpar += pares[i];
            } else {
                maxImpar += pares[i]*2;
                res++;
            }
            res++;
        }

        cout << min(res, (int) pares.size() + 1) << endl;
    }


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}