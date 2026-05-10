// https://atcoder.jp/contests/abc059/tasks/abc059_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    if(a.size() > b.size()) cout << "GREATER\n";
    else if(a.size() < b.size()) cout << "LESS\n";
    else{
        for(int i = 0; i < a.size(); i++){
            if(a[i] > b[i]) {cout << "GREATER\n"; return 0;}
            else if(a[i] < b[i]) {cout << "LESS\n"; return 0;}
        }
        cout << "EQUAL\n";
    }


    return 0;
}