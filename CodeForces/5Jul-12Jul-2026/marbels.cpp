//https://codeforces.com/contest/2042/problem/B

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n; 
    cin >> n;
    vector<int> marbels(n+1,0);
    
    for(int i = 0; i<n; i++){
        int marbel; cin >> marbel;
        marbels[marbel]++;
    }

    int ones=0, distinct=0;
    for(int i = 0; i<=n; i++){
        if(marbels[i] == 1) ones++;
        else if(marbels[i] != 0) distinct++;
    }

    ones = (ones+1)/2;

    cout << ones*2 + distinct << '\n';

    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t; while(t--) solve();
    return 0;
}