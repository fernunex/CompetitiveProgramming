//Problem: 
// Name: 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n=10;
    string s, s1, s2;
    cin >> s;
    s1 = s;
    s2 = s;
    for (int i = 0; i<n; i++){
        if (i%2==0){// T1
            if (s[i] == '?'){
                s1[i] = '1';
                s2[i] = '0';
            }
        }else{
            if (s[i] == '?'){
                s2[i] = '1';
                s1[i] = '0';
            }
        }
    }
    // cout << s << endl;
    // cout << s1 << endl;
    // cout << s2 << endl << endl;

    int res = 10;
    int t1=0, t2=0, tiro1=5, tiro2=5;
    for (int i = 0; i < n; i++){
        if (i%2==0){
            if (s1[i]=='1'){
                t1++;
            }
            tiro1--;
        } else {
            if (s1[i] == '1'){
                t2++;
            }
            tiro2--;
        }
        if (t1 > t2+tiro2  || t2 > t1+tiro1){
            res = i+1;
            break;
        }
    }

    t1 =0, t2=0, tiro1=5, tiro2=5;
    for (int i = 0; i < n; i++){
        if (i%2==0){
            if (s2[i]=='1'){
                t1++;
            }
            tiro1--;
        } else {
            if (s2[i] == '1'){
                t2++;
            }
            tiro2--;
        }
        if (t1 > t2+tiro2  || t2 > t1+tiro1){
            res = min(i+1, res);
            break;
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