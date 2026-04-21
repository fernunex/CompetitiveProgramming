//https://atcoder.jp/contests/abc048/tasks/abc048_b

#include<bits/stdc++.h>
using namespace std;



// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     long long a, b, x;
//     cin >> a >> b >> x;
//     cout << ((b/x) - (a/x)) + (a==0) + (a%x==0 && a!=0) << '\n';

//     return 0;
// }

long long f(long long r, long long x){
    if (r < 0) return 0;
    return r / x + 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, b, x;
    cin >> a >> b >> x;
    cout << f(b,x) - f(a-1,x) << '\n';

    return 0;
}