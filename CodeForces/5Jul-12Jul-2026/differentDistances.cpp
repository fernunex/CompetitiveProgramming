//https://codeforces.com/contest/2233/problem/B

#include<bits/stdc++.h>
#include <vector>
using namespace std;

void solve(){
    int n; cin >> n;
    vector<int> sol(4*n);
    int offset = 0;
    if(n&1){
        vector<int> a = {3,4,8,10}, b = {2,6,7,9}, 
        c = {0,1,5, 11};
        for(int i = 0; i < 4; i++){
            sol[a[i]] = n-1;
            sol[b[i]] = n-2;
            sol[c[i]] = n;
        }
        n -= 3;
        offset += 12;
    }

    if(n){
        vector<int> a = {1,2,5,7}, b = {0,3,4, 6};
        for(int i = 1; i < n; i += 2){
            for(int j = 0; j < 4; j++){
                sol[a[j]+ offset] = i;
                sol[b[j]+ offset] = i+1;
            }
            offset += 8;
        }
    }
    
    for(int i = 0; i < sol.size(); i++){
        cout << sol[i] << ' ';
    }
    cout << '\n';

    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; while(t--) solve();
    return 0;
}