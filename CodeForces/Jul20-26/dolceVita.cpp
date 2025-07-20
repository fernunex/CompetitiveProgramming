//Problem: https://codeforces.com/contest/1671/problem/C
// Name: C. Dolce Vita

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, x;
    
    cin >> n >> x;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int tot, diff;
    long long res;
    tot = x;
    diff= tot - v[0]; 
    if (diff >= 0){
        res = diff;
        res++;

        for (int i = 1; i < n; i++){
            v[i] = v[i] + v[i-1];
            if (v[i] > x){
                break;
            }
            res += (x - v[i])/ (i+1);
            res++;
        }
    } else{
        res=0;
    }
    cout  << res << endl;


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}