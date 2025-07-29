//Problem: https://codeforces.com/contest/2092/problem/C
// Name: C. Asuna and the Mosquitoes

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin >> n;

    vector<int> odd, even;
    int val;
    for (int i = 0; i < n; i++){
        cin >> val;
        if (val & 1){
            odd.push_back(val);
        } else {
            even.push_back(val);
        }
    }

    if (odd.size() == 0){
        cout << *max_element(even.begin(), even.end()) << endl;
    } else if (even.size() == 0){
        cout << *max_element(odd.begin(),odd.end()) << endl;
    } else{
        long long res = accumulate(odd.begin(), odd.end(), accumulate(even.begin(), even.end(), 0ll));
        res = res - odd.size()+1;
        cout << res << endl;
    }


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}