//https://open.kattis.com/problems/bubbletea
// Fer Nuñez

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x;

    cin >> n;
    vector<int> tea(n);
    for(int i = 0; i<n; i++) cin >> tea[i];

    cin >> m;
    vector<int> topp(m);
    for(int i = 0; i<m; i++) cin >> topp[i];

    int res = 3000;
    for(int i = 0; i<n; i++){
        int j;
        cin >> j;
        for(int k = 0; k<j; k++){
            int l;
            cin >> l;
            res = min(res, tea[i]+ topp[l-1]);
        }
    }

    cin >> x;
    // cout << res <<"elres\n";
    cout << max(0, (x/res)-1);

    return 0;
}