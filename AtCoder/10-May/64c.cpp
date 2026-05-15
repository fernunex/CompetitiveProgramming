// https://atcoder.jp/contests/abc064/tasks/abc064_c

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a=0;
    vector<bool> v(8,false);

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        if(p <= 399){
            v[0] = true;
        }else if(p <= 799){
            v[1] = true;
        }else if(p <= 1199){
            v[2] = true;
        }else if(p <= 1599){
            v[3] = true;
        }else if(p <= 1999){
            v[4] = true;
        }else if(p <= 2399){
            v[5] = true;
        }else if(p <= 2799){
            v[6] = true;
        }else if(p <= 3199){
            v[7] = true;
        }else{
            a++;
        }
    }
    int m = 0;
    for(int i = 0; i<8; i++){
        m += v[i];
    }
    cout << max(1, m) << " " << a + m << '\n';
    

    return 0;
}
