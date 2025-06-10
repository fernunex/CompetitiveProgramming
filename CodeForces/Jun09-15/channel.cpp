//Problem: https://codeforces.com/contest/1863/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, a, q;
    string req;

    cin >> n >> a >> q;
    cin >> req;

    // cout << "La n:" << n << endl;
    // cout << "La a:" << a << endl;
    // cout << "La q:" << q << endl;
    if (n == a){
        cout << "YES" << endl;
    } else {
        int connected, disconnected;
        connected = count(req.begin(), req.end(), '+');
        disconnected = count(req.begin(), req.end(), '-');
            // cout << "La connected:" << connected << endl;
            // cout << "La disconnected:" << disconnected << endl;

        int initial = a;
        for (int i = 0; i < q; i++){
            if (req[i] == '+'){
                initial++;
            } else{
                initial--;
            }

            if (initial == n){
                cout << "YES" << endl;
                return;
            }
        }

        if ((a + connected) >= n)
        {
            cout << "MAYBE" << endl;
        } else{
            cout << "NO" << endl;
        }
    }


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}