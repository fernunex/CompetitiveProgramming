// https://atcoder.jp/contests/abc048/tasks/arc064_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, x, a1, a2;

    cin >> n >> x;

    long long res = 0, diff;

    cin >> a1;
    for(int i = 0; i < n-1; i++){
        cin >> a2;
        diff = max(a1+a2 - x,0ll);
        // cout << "diff:" << diff << endl;
        res += diff;
        a1 = max(a2-diff, 0ll);
    }

    cout << res << '\n';

    return 0;
}