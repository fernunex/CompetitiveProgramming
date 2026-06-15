// Problem : https://open.kattis.com/problems/bela

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> vDom;
    vDom['A'] = 11;
    vDom['K'] = 4;
    vDom['Q'] = 3;
    vDom['J'] = 20;
    vDom['T'] = 10;
    vDom['9'] = 14;
    vDom['8'] = 0;
    vDom['7'] = 0;

    map<char, int> vNorm;
    vNorm['A'] = 11;
    vNorm['K'] = 4;
    vNorm['Q'] = 3;
    vNorm['J'] = 2;
    vNorm['T'] = 10;
    vNorm['9'] = 0;
    vNorm['8'] = 0;
    vNorm['7'] = 0;

    int n, tot=0; string t;
    cin >> n >> t;
    for(int i = 0; i<n*4; i++){
        string c;
        cin >> c;
        if(c[1] == t[0]) tot += vDom[c[0]];
        else tot += vNorm[c[0]];
    }

    // cout << "t: " << t[0] << endl;

    cout << tot << endl;


    return 0;
}
