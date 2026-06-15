// https://codeforces.com/gym/102951/problem/A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> xs(n), ys(n);
    for(int i = 0; i < n; i++) cin >> xs[i];
    for(int i = 0; i < n; i++) cin >> ys[i];
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) res = max(res, (xs[i]-xs[j])*(xs[i]-xs[j]) + (ys[i]-ys[j])*(ys[i]-ys[j]));        
    }
    cout << res << '\n';

    return 0;
}