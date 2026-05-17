// https://atcoder.jp/contests/abc068/tasks/abc068_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int t = 1;
    while(t<=n) t *= 2;
    cout << t/2 << '\n';

    return 0;
}