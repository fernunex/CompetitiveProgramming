// https://atcoder.jp/contests/abc052/tasks/abc052_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n >> s;

    int x = 0, temp=0;
    for(int i = 0; i < n; i++) temp = max(temp, (s[i] == 'I'? ++x: --x));

    cout << temp << '\n';

    return 0;
}