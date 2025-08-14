//Problem: https://codeforces.com/contest/1992/problem/D
// Name: D. Test of Love
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    
    string s;
    cin >> s;

    int current=-1;
    while (current < n)
    {
        // Jump
        int jump = m;
        while (current < n && jump)
        {
            current++;
            jump--;
            if (s[current] == 'L') jump = m;
        }

        if (current != -1 && s[current] == 'C'){
            cout << "NO\n";
            return;
        }

        // Swimming
        while (current < n && k >= 0){
            if (k == 0){
                cout << "NO\n";
                return;
            }

            current++;
            k--;
            if (s[current] == 'L') break;
            else if (s[current] == 'C'){
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
    

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}