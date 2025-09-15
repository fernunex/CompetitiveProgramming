#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, res=0, MAXN=25;
    vector<int> p(MAXN,0);
    cin >> n;

    for (int i = n; i >= 0; i--){
        cin >> p[i];
    }

    // sol
    while (true)
    {
        //cout << "it: ";
        //for(int i = MAXN-1; i >= 0; i--) cout << p[i] << " ";
        //cout << endl;

        int count = 0;
        for(int i = MAXN-1; i >= 0; i--){
            count += p[i];
            if (count > 1) break;
        }
        if (count == 1 && p[0]==1) break;
        // Then check this
        res++;

        if (p[0] == 1){ // multiply by a polinomy

            for(int i = MAXN-1; i > 0; i--){
                p[i] = (p[i] + p[i-1]) % 2;
            }
            p[0] = 0;
        } else {
           for (int i = 0; i < MAXN; i++){
                p[i] = p[i+1];
                p[i+1]=0;
           } 
        }
    }
    cout << res << endl;
    
    
    return 0;
}