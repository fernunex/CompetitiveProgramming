//Problem: https://codeforces.com/contest/1841/problem/B
 
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
 
    cin >> n;
 
    int first, minimum = -1;
    cin >> first;
    string s = "1";
    
    int val;
    int first2 = first;
    for (int i = 1; i < n; i++){
        cin >> val;
        if (val >= first2 && minimum == -1){
            first2 = val;
            s += "1";
        } else if (minimum != -1)
        {
            if (val >= minimum && val <= first){
                minimum = val;
                s += "1";
            } else {
                s += "0";
            }
 
        } else if(minimum == -1){
            if (val <= first) {
                minimum = val;
                s += "1";
            } else {
                s += "0";
            }
        } else {
            s += "0";
        }
    }
    cout << s << endl;
 
}
 
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}