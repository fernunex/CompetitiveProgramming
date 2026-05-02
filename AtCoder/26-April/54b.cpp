// https://atcoder.jp/contests/abc054/tasks/abc054_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<string> a(n), b(m);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < m; i++) cin >> b[i];

    for(int i = 0; i <= n-m; i++){
        for(int j=0; j <= n - m; j++){
            bool flag = false;
            if( string_view(a[i]).substr(j, m) == b[0]){
                flag = true;
                for(int k = 1; k < m; k++){
                    if( string_view(a[i+k]).substr(j, m) != b[k]){
                        flag = false;
                        break;
                    }
                }
            }
            if(flag){
                cout << "Yes\n";
                return 0;
            }
        }
    }
    cout << "No\n";

    return 0;
}