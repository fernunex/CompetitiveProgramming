// https://usaco.org/index.php?page=viewproblem2&cpid=616

#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);

    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    
    int m=INT32_MAX;
    for(int i = 0; i <= n; i++) {
        int s = 0, t = i;
        for(int j = 0; j < n; j++) s += v[j]*(t++%n);
        m = min(m,s);
    }
    cout << m << '\n';

    return 0;
}