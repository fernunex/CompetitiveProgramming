//Problem: https://codeforces.com/contest/1647/problem/B
// Name: B. Madoka and the Elegant Gift

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;

    cin >> n >> m;

    vector<string> v(n);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }

    for (int i=0; i < n-1; i++){
        for(int j=0; j < m; j++){
                if (m > 1 && v[i][j] == '1' && v[i+1][j] == '1'){
                    if (v[i][j+1] != v[i+1][j+1]){
                        cout << "NO\n";
                        return;
                    }
                }

                if (v[i][j] == '1'){
                if(v[i][j-1]=='1'){
                    if (v[i+1][j-1] != v[i+1][j]){
                        cout << "NO\n";
                        return;
                    }
                } else {
                    if (v[i+1][j-1] == '1' && v[i+1][j] == '1'){
                        cout << "NO\n";
                        return;
                    }
                }
                }
        }
    }
    cout << "YES\n" ;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}