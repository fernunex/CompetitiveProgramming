//Problem: https://codeforces.com/contest/2122/problem/B
// Name: B. Pile Shuffling

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    long long res=0;

    cin >> n;

    int a, b, c, d;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c >> d;

        if (b > d){
            res+= min(a,c) + (b-d);
        }
        if(a < c){
            res+= (c-a);
        }
    }
    cout << res << endl;
    

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}