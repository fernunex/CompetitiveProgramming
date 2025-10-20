//Problem: https://codeforces.com/contest/1846/problem/C
// Name: C. Rudolf and the Another Competition
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)


bool sortDescAsc(const pair<int, ll> &p1, const pair<int,ll> &p2){
    if (p1.first != p2.first){
        return p1.first >= p2.first;
    } else {
        return p1.second < p2.second;
    }  
}

void solve(){
    int n, m, h;
    cin >> n >> m >> h;
    vector<vector<ll>> v(n, vector<ll>(m+1));
    vector<pair<int, ll>> res;

    int rodoSolved = 0;
    ll rodoPenalty = 0;

    REP(i, 0, n){
        v[i][0] = 0;
        REP(j, 1, m+1) cin >> v[i][j];

        sort(v[i].begin(), v[i].end());

        int probSolved = 0;
        ll penalty = 0;

        REP(j, 1, m+1){
            v[i][j] += v[i][j-1];
            
            if (v[i][j] <= h){
                probSolved++;
                penalty += v[i][j];
            } else {
                break;
            }
        }

        res.push_back(make_pair(probSolved, penalty));

        if (i == 0){
            rodoSolved = probSolved;
            rodoPenalty = penalty;
        }

    }

    // REP(i, 0, n){
    //     cout << "prob: " << res[i].first << " pen: "<< res[i].second << endl;
    // }
    // cout << "--------------------\n";
    sort(res.begin(), res.end(), sortDescAsc);

    // REP(i, 0, n){
    //     cout << "prob: " << res[i].first << " pen: "<< res[i].second << endl;
    // }

    REP(i, 0, n){
        if (res[i].first == rodoSolved && res[i].second == rodoPenalty){
            cout << i + 1 << endl;
            break;
        }
    }
    // cout << "--------------------\n";
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}