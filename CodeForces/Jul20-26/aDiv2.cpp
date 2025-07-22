//Problem: 
// Name: 

#include <bits/stdc++.h>
#include <string>         // std::string

using namespace std;

void solve(){
    string s, res;
    cin >> s;

    if (s.find("FFT") == string::npos && s.find("NTT") == string::npos){
        cout << s << endl;
    } else {
        res = "";
        for (int i = 0; i < s.size(); i++){
            if (s[i] == 'T'){
                res = "T" + res;
            } else {
                res = res + s[i] ;
            }
        }
        cout << res << endl;
    }



}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}