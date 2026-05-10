// https://atcoder.jp/contests/abc059/tasks/arc072_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long a,b,c,tot=0, aux;
    bool f;
    cin >> n;
    vector<long long> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];


    //1 op +
    a = v[0];
    f = a > 0;
    if (!f){
        tot += abs(a) + 1;
        a = 1;
        f = true;
    }
    for(int i = 1; i<n; i++){
        b = v[i];
        aux = a+b;
        if(aux != 0 && (aux > 0 != f)){
            a = aux;
        } else{
            tot += abs(aux) + 1;
            a = f? -1: 1;
        }
        f = !f;
    }

    //2 op -
    long long tot1 = tot;
    tot = 0;
    a = v[0];
    f = a >= 0;
    if (f){
        tot += abs(a) + 1;
        a = -1;
        f = false;
    }
    for(int i = 1; i<n; i++){
        b = v[i];
        aux = a+b;
        if(aux != 0 && (aux > 0 != f)){
            a = aux;
        } else{
            tot += abs(aux) + 1;
            a = f? -1: 1;
        }
        f = !f;
    }

    cout << min(tot1, tot) << '\n';
    return 0;
}