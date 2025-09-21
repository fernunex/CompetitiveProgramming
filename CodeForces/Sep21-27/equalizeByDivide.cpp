//Problem: https://codeforces.com/contest/1799/problem/B
// Name: B. Equalize by Divide
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    int n, counter=0;
    bool oneExist = false;
    cin >> n;
    vector<int> vals(n), res;
    REP(i,0,n){
        cin >> vals[i];
        if (vals[i] == 1) oneExist = true;
    }

    if(n==1){
        cout << "0\n";
        return;
    } else {
        bool flag = true;
        REP(i,0,n-1){
            flag = (flag && vals[i] == vals[i+1]);
        }
        if (flag){
            cout << "0\n";
            return;
        }
    }

    if(oneExist){
        cout << "-1\n";
        return;
    } else {
        int minIndex = 0;
        REP(i,0,n){
            if(i == minIndex){
                continue;
            }

            while (true)
            {
                if (vals[minIndex] > vals[i]){
                    minIndex = i;
                    i = -1;
                    // cout << "Min: " << vals[minIndex] << "\n";
                    break;
                }

                if( ceil( (double) vals[i]/vals[minIndex]) > 1 ){
                    counter++;
                    res.push_back(i+1);
                    res.push_back(minIndex+1);
                    vals[i] = ceil( (double) vals[i]/vals[minIndex] );
                }

                if (vals[minIndex] == vals[i]) break;
            }
        }
    }

    // REP(i,0,n){
        // cout << vals[i] << " ";
    // }
    // cout << endl;

    cout << counter << endl;
    for(int i = 0; i < counter*2; i += 2){
        cout << res[i] << " " << res[i+1] << endl; 
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}