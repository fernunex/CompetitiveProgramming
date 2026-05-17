// https://atcoder.jp/contests/abc066/tasks/abc066_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    for(int i = s.size()-1; i >= 1; i--){
        if(!(i&1)){
            if(string_view(s).substr(0,i/2) == string_view(s).substr(i/2,i/2)){
                cout << i << '\n';
                return 0;
            }
        }
    }

    return 0;
}