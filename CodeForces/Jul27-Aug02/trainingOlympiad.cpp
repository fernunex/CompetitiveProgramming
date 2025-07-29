//Problem: https://codeforces.com/contest/1916/problem/C
// Name: C. Training Before the Olympiad

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;
    vector<unsigned long long> v(n), impar(n);
    cin >> v[0];
    if (v[0] % 2 == 1){
        impar[0] = 1;
    } else {
        impar[0] = 0;
    }
    for (int i = 1; i < n; i++){
        cin >> v[i];
        impar[i] = impar[i-1]; 
        if (v[i] & 1){
            impar[i] = impar[i] + 1;
        }
        v[i] = v[i] + v[i-1];
    }
    
    cout << v[0];
    for (int i = 1; i < n; i++){
        if (impar[i] % 3 == 1){
            cout << ' ' << v[i] - impar[i]/3 - 1;
            continue;
        }
        cout << ' ' << v[i] - impar[i]/3;
            
    }
    cout << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}