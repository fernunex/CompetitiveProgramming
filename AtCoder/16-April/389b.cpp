//https://atcoder.jp/contests/abc389/tasks/abc389_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x, res=1;
    cin >> x;

    int i = 1;
    while(res != x) i++, res = res*i;
    
    cout << i << endl;
}