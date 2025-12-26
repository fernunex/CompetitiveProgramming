// https://open.kattis.com/problems/basicprogramming1
// Author: Fer Nuñez
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin >> n >> t;

    vector<int> vs(n);
    for(int i = 0; i < n; i++)cin >> vs[i];

    if(t == 1){
        cout << "7\n";
    } else if(t == 2){
        if(vs[0] > vs[1]) cout << "Bigger\n";
        else if(vs[0] < vs[1]) cout << "Smaller\n";
        else cout << "Equal\n";
    } else if(t == 3){
        sort(vs.begin(), vs.begin()+3);
        cout << vs[1] << endl;
    } else if(t == 4){
        long long tot = 0;
        for(int i = 0; i<n; i++) tot += vs[i];
        cout << tot << endl;
    } else if(t == 5){
        long long tot = 0;
        for(int i = 0; i<n; i++) if(!(vs[i] & 1)) tot += vs[i];
        cout << tot << endl;
    } else if(t == 6){
        string res;
        for(int i = 0; i<n; i++) res += static_cast<char>((vs[i] % 26)+97);
        cout << res << endl;
    } else if(t == 7){
        int i = 0, aux;
        while(true){
            aux = vs[i];
            vs[i] = -1;
            i = aux;
            if (i >= n) {cout << "Out\n"; break;}
            else if(i == -1) {cout << "Cyclic\n"; break;}
            else if(i == n-1) {cout << "Done\n"; break;}
        }
    }
    return 0;
}