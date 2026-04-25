// https://atcoder.jp/contests/abc052/tasks/arc067_a

#include<bits/stdc++.h>
using namespace std;

vector<int> fa(1005,0);


void fack(long long n){

    if(n % 2 == 0){
        int exp = 0;
        while(n % 2 == 0) n/=2, exp++;
        fa[2] += exp;
    }

    for(long long p = 3; p*p <= n; p += 2){
        if(n % p == 0){
            int exp = 0;
            while(n % p == 0) n/=p, exp++;
            fa[p] += exp;
        }
    }

    if(n > 1) fa[n] += 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        fack(i);
    }

    long long tot=1, MOD = 1000000007;
    for(auto c : fa){
        tot = (tot*(c+1))%MOD;
    }
    cout << tot << '\n';
    
    return 0;
}