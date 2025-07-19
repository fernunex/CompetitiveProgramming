//Problem: https://codeforces.com/contest/2122/problem/A
// Name: A. Greedy Grid

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;

    cin >> n >> m;

    if ((n >= 2 && m > 2) || (n > 2 && m >= 2)){
        std::cout << "YES" << std::endl;
    } else
    {
        std::cout << "NO" << std::endl;
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}