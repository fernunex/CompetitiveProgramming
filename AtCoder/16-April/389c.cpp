// https://atcoder.jp/contests/abc389/tasks/abc389_c

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long q;
    cin >> q;
    vector<long long> tab;
    tab.push_back(0);

    long long op, ck = 0;
    for (long long i = 0; i < q; i++)
    {
        cin >> op;
        if (op == 1)
        {
            long long len;
            cin >> len;
            tab.push_back(len+tab.back());
        } else if(op == 2){
            ck++;
        } else{
            long long p;
            cin >> p;
            cout << tab[p+ck-1] - tab[ck] << endl;
        }
        
    }
    
    return 0;
}