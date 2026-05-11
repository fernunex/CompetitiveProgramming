// https://atcoder.jp/contests/abc061/tasks/abc061_c

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k, a, b, ind=0, res=-1;
    cin >> n >> k;
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        a = v[i].first;
        b = v[i].second;
        ind += b;
        if(k <= ind && res == -1ll) res = a;
    }
    cout << res << '\n';


    return 0;
}