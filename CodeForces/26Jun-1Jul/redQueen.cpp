//https://codeforces.com/contest/2028/problem/A

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, b, x=0, y=0, steps=1000, pos=0;
    string s;
    cin >> n >> a >> b >> s;
    while(steps--){
        if(s[pos] == 'N') y++;
        else if(s[pos] == 'S') y--;
        else if (s[pos] == 'E') x++;
        else x--;
        pos++;
        pos %= n;
        if(x == a && y == b){
            cout << "Yes\n";
            return;
        }
    }
    cout << "No\n";
    

    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t; while(t--) solve();
    return 0;
}