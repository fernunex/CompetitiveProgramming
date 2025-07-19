//Problem: https://codeforces.com/contest/2027/problem/B
// Name: B. Stalin Sort

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<int> v(n);
    int inMin=0;
    cin >> v[inMin];
    for (int i=1; i < n; i++){
        cin >> v[i];
    }

    if (n == 1){
        cout << "0\n";
        return;
    }

    int dRight=0, dLeft, res=2002;
    for (int i=0; i < n; i++){
        dLeft=0;
        int icp=i+1;
        while(icp < n){
            if(v[i] < v[icp]){
                dLeft++;
            }
            icp++;
        }
        res=min(res, dLeft + dRight);
        dRight++;
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