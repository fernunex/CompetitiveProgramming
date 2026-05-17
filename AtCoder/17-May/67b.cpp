// https://atcoder.jp/contests/abc067/tasks/abc067_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >>v[i];
    sort(v.rbegin(), v.rend());
    int tot = 0;
    for(int i = 0; i < k; i++) tot += v[i];
    cout << tot << '\n';


    return 0;
}