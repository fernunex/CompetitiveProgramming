// https://atcoder.jp/contests/abc053/tasks/abc053_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    cout << s.rfind('Z') - s.find('A') + 1 << '\n';


    return 0;
}