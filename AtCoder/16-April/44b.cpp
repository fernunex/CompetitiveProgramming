// https://atcoder.jp/contests/abc044/tasks/abc044_b

#include<bits/stdc++.h>
using namespace std;


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string w;
    cin >> w;
    vector<int> v(26,0);

    for (int i = 0; i < w.size(); i++) v[w[i]-97]++;

    for (int i = 0; i < v.size(); i++){
        if(v[i] & 1) {cout << "No" << endl; return 0;}
    }
    {cout << "Yes" << endl; return 0;}


    
}