#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<bool> v(5,false);

    int val;
    for(int i = 0; i < 10; i++){
        cin >> val;
        v[val] = true; 
    }

    int res = 0;
    for (int i = 1; i <= 4; i++){
        if(!v[i]){
            res++;
        }
    }
    cout << res;
    
    return 0;
}