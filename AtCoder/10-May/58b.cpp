// https://atcoder.jp/contests/abc058/tasks/abc058_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string o, e;
    cin >> o >> e;
    int i=0, j=0;
    while(i < o.size() || j < e.size()){
        if(i < o.size()){
            cout << o[i++];
        }
        if(j < e.size()){
            cout << e[j++];
        }
    }

    cout << '\n';

    return 0;
}