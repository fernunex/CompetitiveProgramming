//Problem: https://codeforces.com/contest/1997/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<char> up(n), down(n);

    for (int i = 0; i < n; i++)
    {
        cin >> up[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> down[i];
    }

    if (n < 3){
        cout << "0\n";
    } else{
        int ans = 0;
        for (int i = 0; i < n - 2; i++)
        {
            if (up[i] == '.' && up[i + 1] == '.' && up[i+2] == '.' &&
                down[i] == 'x' && down[i+1] == '.' && down[i+2] == 'x') ans++;
            else if(up[i] == 'x' && up[i + 1] == '.' && up[i+2] == 'x' &&
                down[i] == '.' && down[i+1] == '.' && down[i+2] == '.') ans++;
        }
        cout << ans <<  endl;
    }
    

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}