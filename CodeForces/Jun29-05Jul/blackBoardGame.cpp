//Problem: https://codeforces.com/contest/2123/problem/A
// Name: A. Blackboard Game

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    if ((n-1) % 4 == 3 && n != 1){
        cout << "Bob\n";
    } else {
        cout << "Alice\n";
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}