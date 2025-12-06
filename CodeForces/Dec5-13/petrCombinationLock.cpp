//Author: Fer Nuñez

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) cin >> v[i];

    for(int i = 0; i < (1<<n); i++){
        int tot = 0;
        for(int j = 0; j < n; j++){
            if(i & (1 << j)) tot += v[j];
            else tot -= v[j];
        }

        if(tot % 360 == 0){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}