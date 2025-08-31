//Problem: https://codeforces.com/contest/1894/problem/B
// Name: B. Two Out of Three
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector <int> a(n+1), b(n+1), memo(101,0);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        memo[a[i]]++;
    }

    int equals = 0;
    for (int i = 0; i < n; i++){
        if (memo[a[i]] > 1){
            if (equals == 0){
                b[i] = 1;
                for (int j = i+1; j < n; j++){
                    if (a[j] == a[i]) b[j] = 2;
                }
            } else {
                b[i] = 1;
                for (int j = i+1; j < n; j++){
                    if (a[j] == a[i]) b[j] = 3;
                }
            }
            memo[a[i]] = -1;
            equals++;
        } else if (memo[a[i]] == 1){
            b[i] = 1;
        }
    }
    if (equals < 2){
        cout << "-1" <<endl;
    } else {
        for (int i = 0; i<n; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}