// https://atcoder.jp/contests/abc056/tasks/abc056_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int w,a,b;
    cin >> w >> a >> b;
    int res;
    if (a > b) res = max(0, a- (b+w));
    else res = max(0, b - (a+w));
    cout << res << '\n';

    return 0;
}