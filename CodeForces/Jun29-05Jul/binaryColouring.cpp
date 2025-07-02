//Problem: https://codeforces.com/contest/1977/problem/B
// Name: B. Binary Colouring

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n = 32;

    long long x;
    cin >> x;

    vector<int> res(32, 0);

    // The solution is like the diference between a acumulate in a sum for each bit
    //    [1, 3, 7, 15]  if 1 1 1 = 1 + 3 + 7
                    //   then -1 0 0 1 = -1 + 0 + 0 + 16
    for (int i = 0; i < n; i++)
    {
        if (1LL & (x >> i)){ // if its a 1 we care
            if (i == 0){
                res[i] = 1;
            } else
            {
                if (res[i] == 1){
                    res[i] = 0;
                    res[i+1] = 1;
                } else if (res[i - 1] == 1)
                {
                    res[i - 1] = -1;
                    res[i] = 0;
                    res[i + 1] = 1;
                } else{
                    res[i] = 1;
                }
            }
        }
    }

    cout << "32\n";
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << ' ';
    }
    cout << endl;
    
    



}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}