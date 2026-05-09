// https://atcoder.jp/contests/abc056/tasks/arc070_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, tot=0, cnt=0;
    cin >> n;
    while(tot<n){
        tot += cnt;
        cnt++;
    }
    cout << cnt-1 << '\n';

    return 0;
}