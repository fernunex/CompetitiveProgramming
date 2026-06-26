// https://open.kattis.com/problems/jollyjumpers

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, prev, act, cnt;
    while(cin >> n){
        vector <bool> v(n,false);
        cin >> prev;
        for(int i = n-1; i > 0; i--){
            cin >> act;
            v[(abs(prev-act)<n?abs(prev-act):0)] = true;
            prev = act;
        }
        cnt = 0;
        for(int i = 1; i<n; i++){
            cnt += v[i];
        }
        if(cnt == n-1){cout << "Jolly\n";}
        else {
            cout << "Not jolly\n";
        }
    }

    return 0;
}