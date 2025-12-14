// 11683 - Laser Sculpture
// Fer Nunez

#include<bits/stdc++.h>
using namespace std;


int main(){
    int h, w;

    while (cin >> h >> w && h != 0)
    {
        vector<int> v(w);
        for(int i = 0; i < w; i++) cin >> v[i];

        int res = 0;
        for(int i = h-1; i >= 0; i--){
            bool on = false;
            for(int j = 0; j < w; j++){
                if(v[j] <= i && !on) res++, on=true;
                if(v[j] > i) on = false;
            }
        }
        cout << res  << endl;
    }

    return 0;
}