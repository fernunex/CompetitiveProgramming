// https://atcoder.jp/contests/abc063/tasks/arc075_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, tot=0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i], tot += v[i];
    sort(v.begin(), v.end());
    if(tot % 10 == 0){
        for(int i = 0; i < n; i++){
            if(v[i] % 10 != 0){
                cout << tot-v[i] << '\n';
                return 0;
            }
        }
        cout << 0 << '\n';
    }else{ 
        cout << tot << '\n';
    }


    return 0;
}