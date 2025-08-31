//Problem: B. Make Them Odd
// Name: https://codeforces.com/contest/1277/problem/B
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n, val, res=0;
    cin >> n;
    set<int> s;

    for (int i = 0; i < n; i++){
        cin >> val;
        if (!(val & 1)){
            s.insert(val);
        }
    }


    while (s.empty() == false){
        int v = *s.rbegin();
        while (!(v & 1))
        {
            // cout << v << endl;
            s.erase(v);
            v /= 2;
            res++;
        }
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