// Author: Fer Nunez

#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    int n;
    cin >> n;
    cin >> s;

    int res = 0;
    for(int i = 0; i < n; i++){
        if (s[i] != s[n-1]) res++;
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