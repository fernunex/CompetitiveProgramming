// https://usaco.org/index.php?page=viewproblem2&cpid=568

#include<bits/stdc++.h>
using namespace std;


///-------------------------------------Pending

int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    freopen("speeding.in", "r", stdin);
    freopen("speeding.out", "w", stdout);

    int n, m;
    cin >> n >> m;
    vector<int> l(n+1,0), s(n+1,0);
    for(int i = 1; i <= n; i++) cin >> l[i], l[i] += l[i-1], cin >> s[i];

    int ma = 0, a, b, t = 0;

    for(int i = 1; i <= m; i++){ 
        cin >> a;
        cin >> b;
        for(int j = 1; j <= n; j++){
            if ( (l[j] >= t && t+a > l[j])){
                ma = max(ma, b - s[j]);
            }
        }
        t += a;
    }
    cout << ma << '\n';
    return 0;
}

