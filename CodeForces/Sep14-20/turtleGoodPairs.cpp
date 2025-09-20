//Problem: https://codeforces.com/contest/2003/problem/C
// Name: C. Turtle and Good Pairs
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> v(26,0);
    char ch;
    for (int i = 0; i < n; i++){
        cin >> ch;
        v[ch -'a']++;
    }

    int l=0, r=25;
    bool ptrLef = true, ptrRig = true;
    while (l<=r)
    {
        if(v[l] && ptrLef){
            cout << static_cast<char>(l + 'a');
            v[l]--;
            ptrLef = false;
            ptrRig = true;
        } else if(!v[l]){
            l++;
        }

        if(v[r] && ptrRig){
            cout << static_cast<char>(r + 'a');
            v[r]--;
            ptrLef = true;
            ptrRig = false;
        } else if(!v[r]){
            r--;
        }
    }
    cout << endl;
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}