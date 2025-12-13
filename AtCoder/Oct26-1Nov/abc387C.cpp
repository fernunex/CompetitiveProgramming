//Problem: https://atcoder.jp/contests/abc387/tasks/abc387_c
// Name: C - Snake Numbers
// Author: Fer Nunez

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f1(vector<int> v){
    ll res = 0;
    for(int k = 0; k < v.size()-1; k++){
        for(int i = 1; i <= 9; i++){
            res += powl(i, k);
        }
    }
    return res;
}

ll f2(int v, int l){
    ll res = 0;
    for(int i = 1; i < v; i++) res += powl(i,l-1);

    return res;
}

ll f3(vector<int> v){
    ll res = 0;
    for(int i = 1; i < v.size(); i++){
        if(v[i-1] < v[0] || i == 1){
                ll tot = min(v[i],v[0]);
                tot *= powl(v[0],v.size()-i-1);
                res += tot;
        } else break;
    }
    return res;
}

ll f4(vector<int> v){
    for(int i = 1; i < v.size(); i++){
        if(v[i] >= v[0]) return 0;
    }
    return 1;
}


ll co(vector<int> v){
    ll res = 0;
    res = f1(v);
    res += f2(v[0], v.size());
    res += f3(v);
    res += f4(v);
    return res;
}



int main(){
    vector<int> n1, n2;

    char c;
    while(cin.get(c)){
        if(c == ' ') break;
        n1.push_back(c - 48);
    }
    while(cin >> c){
        if (c == '\n') break;
        n2.push_back(c - 48);
    }

    // cout << co(n1) << endl;
    // cout << co(n2) << endl;


    cout << co(n2) - co(n1) + f4(n1) << endl;


    return 0;
}