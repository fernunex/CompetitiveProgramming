#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007


int potmod(int x, long long n, int M) {
    long long res = 1LL;
    long long base=x;

    while(n >= 1LL) {        
        if(n & 1LL) {
            res = (res * base) % M;
            n--;  
        }
        else {
            base = (base * base) % M;
            n /= 2;
        }
    }
    return res;
}

int k;
long long n;

int main() {
    long long res1,res2;
    scanf("%lld %d",&n, &k);
    res1=potmod(10,n,MOD);
    res1=res1-1;
    if (res1<0LL) {
        res1=res1+MOD;
    }
    res2=potmod(9,MOD-2,MOD);
    res1=res1*res2;
    res1%=MOD;
    res1=res1*k;
    res1%=MOD;
    printf("%lld\n",res1);
    return 0;
}