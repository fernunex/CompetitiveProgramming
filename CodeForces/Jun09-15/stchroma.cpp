//Problem: https://codeforces.com/contest/2106/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x;

    cin >> n >> x;


    if (n == 1){
        cout << "0" << endl;
    } else {
        string sol = "";
        int counter = 0;
        while (n > counter)
        {
            if (counter == x){
                counter++;
                continue;
            }
            sol += to_string(counter++) + " ";
        }
        if(x < n){
            sol += to_string(x);
        }
        cout << sol << endl;
    }
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}