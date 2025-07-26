//Problem: https://codeforces.com/contest/1270/problem/B
// Name: B. Interesting Subarray

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // Left to Right
    int count=0;
    int maxNum=v[0], indexMax=0;
    for (int i=1; i < n; i++){
        if (abs(maxNum - v[i]) >= i- indexMax +1){
            cout << "YES\n" << indexMax +1 << " " << i+1 << endl;
            return;
        }
        count++;
        if (v[i] >= maxNum-count){
            indexMax = i;
            maxNum = v[i];
            count=0;
        }
    }

        // Right to Left
    // count=0;
    // maxNum=v[n-1], indexMax=n-1;
    // for (int i=n-2; i >= 0; i--){
    //     if (abs(maxNum - v[i]) >= indexMax+i+1){
    //         cout << "YESRL\n"  << i+1 << " "  << indexMax +1 << endl;
    //         return;
    //     }
    //     count++;
    //     if (v[i] >= maxNum-count){
    //         indexMax = i;
    //         maxNum = v[i];
    //         count=0;
    //     }
    // }
    cout << "NO\n";
    


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}