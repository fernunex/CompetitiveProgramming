//Problem: https://codeforces.com/contest/2053/problem/B
// Name: B. Outstanding Impressionist
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n;
    map<int, int> fixed;
    vector<pair<int,int>> vec;
    
    cin >> n;
    int v1, v2;
    REP(i, 0, n){
        cin >> v1 >> v2;
        vec.push_back({v1,v2});

        if (v1 == v2) fixed[v1] += 1;
    }

    vector<int> fixed_vec;
    for( auto pair : fixed) {
        fixed_vec.push_back(pair.first);
        // cout << pair.first << " ";
    };
    // cout << "Fixeds\n";
    

    REP(i, 0, n){
        int indexLow = lower_bound(fixed_vec.begin(), fixed_vec.end(), vec[i].first) - fixed_vec.begin();
        int indexHigh = lower_bound(fixed_vec.begin(), fixed_vec.end(), vec[i].second) - fixed_vec.begin();
    
        if (vec[i].first == vec[i].second){
            if (fixed[vec[i].first] > 1){
                cout << "0";
                continue;
            }
        }
        else if (
            indexLow != fixed_vec.size() && indexHigh != fixed_vec.size() &&
            fixed_vec[indexLow] == vec[i].first &&
            fixed_vec[indexHigh] == vec[i].second &&
            indexHigh - indexLow == vec[i].second - vec[i].first
        ) {
            cout << "0";
            continue;
        }
        cout << "1";
    }
    cout << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}