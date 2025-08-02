//Problem: https://codeforces.com/contest/1945/problem/C
// Name: C. Left and Right Houses
// Author: Fer Nunez

#include <bits/stdc++.h>
#include <numeric>

using namespace std;

void solve(){
    int n, zer=0, one=0;
    string ho;
    cin >> n >> ho;
    vector<int> zeros(n+1,0), ones(n+1,0);
    for (int i = 1; i <= n; i++){
        if (ho[i-1] == '0') zer++;
        else one++;
        zeros[i] = zer;
        ones[i] = one;
    }

    int left, right, res=-1;
    double half = (double)n/2, currDiff=(double)n*2;
    for (int i = 0; i <= n; i++){
        if (i==0){
            if ( (n+2-1)/2 <= ones[n]){
                res=0;
                currDiff=half;
            }
        } else if (i == n){
            if ( (n+2-1)/2 <= zeros[n] && abs(half - i) < currDiff){
                res=n;
            }
        } else {
            left = zeros[i];
            right = ones[n] - ones[i];
            // cout << "i:" << i << "-- left:" << left << "-- right:" << right << " --"<<n-i<<"/2="<< (n-i+2-1)/2<< endl; 

            if (left >= (i+2-1)/2 && right >= (n-i+2-1)/2){
                // cout << "i:" << i << "--CurrDiff:"<<currDiff << "-->" << abs(half - i)<<endl;
                if (abs(half - i) < currDiff){
                    res=i;
                    currDiff = abs(half - i);
                }
            }
        }
    }
    cout << res << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}