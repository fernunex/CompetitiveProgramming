//Problem: 
// Name: 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n, m, q, b1, b2, a;
    cin >> n >> m >> q >> b1 >> b2 >> a;

    int bLeft = min(b1,b2);
    int bRight = max(b1,b2);

    if (a > bLeft && a < bRight) cout << (bRight - bLeft)/2;
    else if (a < bLeft) cout << bLeft - 1;
    else cout << n - bRight;
    cout << endl;
    
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}