// Problem

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int n;
    cin >> n;

    ll ac=0, tc=0, v1, v2;
    cin >> ac >> tc;
    for(int i = 0; i < n-1; i++){
        cin >> v1 >> v2;
        ll atemp, ttemp, atemp2, ttemp2;
        atemp = (ac+v1-1)/v1 * v1;
        ttemp = (ac+v1-1)/v1 * v2;
        atemp2 = (tc+v2-1)/v2 * v1;
        ttemp2 = (tc+v2-1)/v2 * v2;
        
        if (atemp >= ac && ttemp >= tc) ac=atemp, tc=ttemp;
        else if (atemp2 >= ac && ttemp2 >= tc) ac=atemp2, tc=ttemp2;

        // cout << "ac:" << ac << " tc:" << tc << endl;
    }

    cout << ac+tc << endl;

    return 0;
}