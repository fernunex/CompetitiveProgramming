//Problem: https://codeforces.com/contest/1579/problem/A

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int as, bs, cs;
    string s;
    cin >> s;

    as = count(s.begin(), s.end(), 'A');
    bs = count(s.begin(), s.end(), 'B');
    cs = count(s.begin(), s.end(), 'C');

    if (bs == as + cs){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}