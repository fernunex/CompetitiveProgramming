//Problem: https://codeforces.com/contest/1504/problem/B
// Name: B. Flip the Bits
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    string s1, s2;
    cin >> n >> s1 >> s2;
    string sxor(n, '0');
    vector<int> ones(n,0), zeros(n,0);
    for (int i = 0; i < n; i++){
        if (i == 0){
            if (s1[i] == '1') ones[i] = 1;
            else zeros[i] = 1;
        }else {
            if (s1[i] == '1') {
                ones[i] = ones[i-1] + 1;
                zeros[i] = zeros[i-1];
            }
            else {
                zeros[i] = zeros[i-1] + 1;
                ones[i] = ones[i-1];
            } 
        }

        if (s1[i] != s2[i]) sxor[i] = '1';
    }

    if (n == 1){
        if (s1[0] == s2[0]){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }else {
        int indexSection=0;
        for (int i=1; i<n; i++){
            if (sxor[i-1] != sxor[i]){
                if (ones[i-1] != zeros[i-1]){
                    cout << "NO\n";
                    return;
                }
            }
        }
        if (sxor[n-1] =='1'){
            if (ones[n-1] != zeros[n-1]){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}