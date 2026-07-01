//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3302

#include<bits/stdc++.h>
using namespace std;

int n;

void solve(){

    vector<int> initial_pol(n,0);
    int carNum, poleDiff;
    bool possible = true;
    for(int i = 0; i < n; i++){
        cin >> carNum >> poleDiff;
        int pos = i+poleDiff;
        // cout << "pos: " << pos << "--car: " << carNum << endl;
        if( pos >= 0 && pos < n ){
            if(initial_pol[pos]) possible = false;
            initial_pol[pos] = carNum;
        }
    }

    for(int i = 0; i < n; i++){
        if(!initial_pol[i] || !possible){
            cout << -1;
            return;
        }
    }
    for(int i = 0; i < n-1; i++){
        cout << initial_pol[i] << ' ';
    }
    cout << initial_pol[n-1];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    bool executedOnce = false;
    while(cin >> n && n != 0){
        solve();
        cout << '\n';
    }

    return 0;
}