//Problem: https://codeforces.com/contest/1775/problem/A2

#include <bits/stdc++.h>

using namespace std;

void solve(){
    string names, a, b, c;
    int iniA, iniB, iniC;

    cin >> names;

    // head and tail same
    if (names[0] == names[names.size() - 1]){
        iniA = 0;
        iniB = 1;
        iniC = names.size() - 1;
    } else if (names[0] == 'a') // Searching for a max
    {
        iniA = 0;
        iniB = 1;
        iniC = names.size() - 1;
        while (iniB < (iniC - 1) && names[iniB] < names[iniC])
        {
                iniB++;
        }
        if (iniB != 1){
            iniB;
        }
    } else { // Searching for a min
        iniA = 0;
        iniB = 1;
        iniC = names.size() - 1;
        while ((iniB+1) < iniC && names[iniB] >= names[iniC])
        {
            iniC--;
        }
        if (iniC != names.size()){
            iniC;
        }
    }
    cout << names.substr(iniA, iniB - iniA) << " " << names.substr(iniB, iniC - iniB) << " " << 
        names.substr(iniC, names.size() - iniC) << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}