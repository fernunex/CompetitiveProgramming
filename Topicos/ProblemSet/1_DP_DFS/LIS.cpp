//Problem: https://omegaup.com/arena/topicosad2025_1?fromLogin#problems/LIS
// Name: A. Subsecuencia Creciente más Larga
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n, res = 1;
    cin >> n;
    vector<int> a(n), memo;
    REP(i,0,n) cin >> a[i];

    // DP -> O(n²)
    // for (int i = n-1; i >= 0; i--){
    //     memo[i] = 1;
    //     REP(j,i+1, n){
    //         if (a[i] < a[j]) memo[i] = max(memo[i], 1 + memo[j]);
    //     }
    //     res = max(res, memo[i]);
    // }

    // cout << res << endl;
    // REP(i,0,n-1) cout << memo[i] << " " << endl;

    // Using logic of patient sort -> O(nlog(n))
    // Creating various decks of decreasing cards
    // The total decks of decreasing cards contain the length of increasing subsecuence
    // Basically you could take one card from each deck. And in a left deck always exists
    // a card smaller than in the right deck.
    memo.push_back(a[0]);
    REP(i,1,n){
        auto it = lower_bound(memo.begin(), memo.end(), a[i]); // binary search
        if (it == memo.end()) memo.push_back(a[i]);
        else *it = a[i];
    }
    cout << memo.size() << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    // cin>>tt;
    // while(tt--)
    solve();
    return 0;
}