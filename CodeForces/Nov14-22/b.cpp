// Author: Fer Nunez

#include<bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, n;
    cin >> a >> b >> n;
    if (b >= a) cout << 1;
    else if (min(a/n,b) == b) cout << 1;
    else cout << 2;
    cout << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}