// https://open.kattis.com/problems/vote
// Author: Fer Nuñez

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, tot=0, ma=-1, mi=50'001, v, id;
    cin >> n;
    vector<int> vs(n);
    for(int i=0; i < n; i++){
        cin >> v;
        tot += v;
        if (v > ma) id = i, ma = v;
        vs[i] = v;
    }

    sort(vs.begin(), vs.end());

    if(vs[n-1] == vs[n-2]) cout << "no winner\n";
    else if(ma > tot/2) cout << "majority winner " << id+1 << endl;
    else cout << "minority winner " << id+1 << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}