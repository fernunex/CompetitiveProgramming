// https://atcoder.jp/contests/abc057/tasks/abc057_c

#include<bits/stdc++.h>
using namespace std;

int f(long long a,long long b){
    int t1 = 0, t2 = 0;
    while(a){
        t1++;
        a /= 10;
    }
    while(b){
        t2++;
        b /= 10;
    }
    return max(t1,t2);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;


    int res = f(1, n);
        for(long long i = 2; i*i <= n; i++){
        if(n % i == 0) res = min(res,f(n/i, i));
    }

    cout << res << '\n';


    return 0;
}