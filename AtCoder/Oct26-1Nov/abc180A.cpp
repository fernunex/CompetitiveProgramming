//Problem: https://atcoder.jp/contests/abc380/tasks/abc380_a
// Name: A - 123233
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    vector<int> arr(7, 0);
    string s;
    cin >> s;

    REP(i, 0, 6){
        arr[s[i] -'0']++;
    }

    if (arr[1] == 1 && arr[2] == 2 && arr[3] == 3) cout << "Yes\n";
    else cout << "No\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}