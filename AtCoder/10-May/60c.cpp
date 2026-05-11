// https://atcoder.jp/contests/abc060/tasks/arc073_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a1 = 0, a2, n, t, tot = 0;;
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        cin >> a2;
        tot += min(t, a2-a1);
        a1 = a2;
    }
    tot += t;
    cout << tot << '\n';


    return 0;
}