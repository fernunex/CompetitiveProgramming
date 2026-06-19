// https://usaco.org/index.php?page=viewproblem2&cpid=917

#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);

    int n; cin >> n;
    vector<tuple<int,int,int>> v;

    string s;
    int p,q,r;
    for(int i = 0; i < n; i++){
        cin >> s >> p >> q;
        if(s == "none") r = 0;
        else if(s == "on") r = 1;
        else r = 2;
        v.push_back({r,p,q});
    }

    // Traffic out
    int lo = 0, up = 1000000;
    for(int i = n-1; i >= 0; i--){
        if(get<0>(v[i]) == 0) lo = max(lo, get<1>(v[i])), up = min(up, get<2>(v[i]));
        else if(get<0>(v[i]) == 1) lo -= get<2>(v[i]), up -= get<1>(v[i]);
        else lo += get<1>(v[i]), up += get<2>(v[i]);
    }

    cout << max(lo,0) << " " << max(up,0) << '\n';

    lo = 0, up = 1000000;
    for(int i = 0; i < n; i++){
        if(get<0>(v[i]) == 0) lo = max(lo, get<1>(v[i])), up = min(up, get<2>(v[i]));
        else if(get<0>(v[i]) == 1) lo += get<1>(v[i]), up += get<2>(v[i]);
        else lo -= get<2>(v[i]), up -= get<1>(v[i]);
    }

    cout << max(lo,0) << " " << max(up,0) << '\n';

    return 0;
}