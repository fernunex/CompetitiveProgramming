//Problem: https://codeforces.com/contest/2094/problem/E
// Name: E. Boneca Ambalabu
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n, val;
    cin >> n;
    vector<long long> powersOnes(31,0), ve(n);
    
    for (int i = 0; i < n; i++){
        cin >> val;
        ve[i] = val;
        for (int j=0; j<31; j++){
            if (val&(1 << j)){
                powersOnes[j]++;
            }
        }
    }


    long long res=0;
    for (int i = 0; i < n; i++){
        long long sum=0;

        for (int j=0; j<31; j++){
            if (ve[i]&(1 << j)){
                sum += (1 << j)*(n-powersOnes[j]);
            } else {
                sum += (1 << j)*(powersOnes[j]);
            }
        }
        res = max(res, sum);
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