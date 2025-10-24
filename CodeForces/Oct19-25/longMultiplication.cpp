//Problem: https://codeforces.com/contest/1954/problem/C
// Name: C. Long Multiplication
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

void solve(){
    string n1, n2;
    cin >> n1 >> n2;

    bool setI = true;
    for(int i = 0; i < n1.size(); i++){
        
        if (setI && n1[i] != n2[i]){
            if (n1[i] - '0' < n2[i] - '0'){
                char temp = n2[i];
                n2[i] = n1[i];
                n1[i] = temp;
            }
            setI = false;
        } else {
            if (n1[i] - '0' > n2[i] - '0'){
                char temp = n2[i];
                n2[i] = n1[i];
                n1[i] = temp;
            }
        }
    }
    cout << n1 << endl << n2 << endl; 

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}