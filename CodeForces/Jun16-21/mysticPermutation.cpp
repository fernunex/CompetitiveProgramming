//Problem: https://codeforces.com/contest/1689/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> vec(n);
    vector<int> vecSol(n,0);

    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }

    if (n == 1){
        cout << "-1\n";
        return;
    }


    for (int i = 0; i < n - 1; i++){
        if (i+1 == vec[i]){
            vecSol[i] = i+2;
            vecSol[i+1] = i+1;
            i++;
        } else{
            vecSol[i] = i+1;
        }
    }

    if (vecSol[n-1] == 0 || vec[n-1] == vecSol[n-1]){
        if(vec[n-1] == n){
            vecSol[n-1] = vecSol[n-2];
            vecSol[n-2] = n; 
        }else{
            vecSol[n-1] = n;
        }
    }

    for (int i = 0; i < n; i++){
        cout << vecSol[i] << ' ';
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