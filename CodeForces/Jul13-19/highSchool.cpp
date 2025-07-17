//Problem: https://codeforces.com/contest/987/problem/B
// Name: B. High School: Become Human

// Sent with g++ 17 wrong answer
// Set with g++  20 accepted

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int x, y;

    cin >> x >> y;

    long double x_y = y*log10(x);
    long double y_x = x*log10(y);


    if (x_y > y_x){ 
        cout << ">\n";
    } else if(x_y < y_x){
        cout << "<\n";
    } else {
        cout << "=\n";
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    // int tt;
    // cin>>tt;
    solve();
    return 0;
}