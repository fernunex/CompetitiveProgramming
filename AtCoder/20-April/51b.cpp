// atcoder.jp/contests/abc051/tasks/abc051_b

#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int k, s;
    cin >> k >> s;

    long long tot = 0;
    for(int i = 0; i <= k; i++){
        for(int j = 0; j <= k; j++){
            if( (s - (i+j)) >= 0 && (s - (i+j)) <= k )tot++;
        }
    }
    cout << tot << '\n';
    return 0;
}