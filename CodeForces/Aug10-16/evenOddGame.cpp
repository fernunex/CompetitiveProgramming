//Problem: D. Even-Odd Game
// Name: https://codeforces.com/contest/1472/problem/D
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n, val;
    cin >> n;
    vector<int> even, odd;
    for (int i = 0; i < n; i++){
        cin >> val;
        if (val&1) odd.push_back(val);
        else even.push_back(val);
    }

    sort(even.rbegin(), even.rend());
    sort(odd.rbegin(), odd.rend());

    int el=0, ol=0;
    ll alice=0, bob=0;
    while (el < even.size() || ol < odd.size()){
        //Alice
        if (el < even.size() && ol < odd.size()){
            if (even[el] >= odd[ol]){
                alice += even[el];
                el++;
            } else {
                ol++;
            }
        } else if (el < even.size())
        {
            alice += even[el];
            el++;
        } else {
            ol++;
        }

        // Bob
        if (el < even.size() && ol < odd.size()){
            if (even[el] <= odd[ol]){
                bob += odd[ol];
                ol++;
            } else {
                el++;
            }
        } else if (ol < odd.size())
        {
            bob += odd[ol];
            ol++;
        } else {
            el++;
        }
    }
    if (alice > bob){
        cout << "Alice\n";
    } else if (alice < bob){
        cout << "Bob\n";
    } else {
        cout << "Tie\n";
    }


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}