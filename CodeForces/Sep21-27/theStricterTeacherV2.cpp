//Problem: 
// Name: 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n, m, q, b1, b2, a;
    cin >> n >> m >> q;

    vector<int> teachers(m);
    REP(i,0,m){
        cin >> teachers[i];
    }
    sort(teachers.begin(), teachers.end());


    int pos;
    REP(i, 0, q){
        cin >> pos;
        // Logic for finding
        auto upper = upper_bound(teachers.begin(), teachers.end(), pos);

        if (upper == teachers.begin()){
            cout << *teachers.begin() - 1 << endl;
        } else if(upper == teachers.end()){
            cout <<  n - *teachers.rbegin() << endl;
        } else{
            cout << (*upper - *prev(upper))/2 << endl;
        }
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}