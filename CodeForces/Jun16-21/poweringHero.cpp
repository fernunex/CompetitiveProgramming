//Problem: https://codeforces.com/contest/1800/problem/C1

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    int n;

    cin >> n;

    ll sum = 0;
    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cin >> vec[i];
    }

    for (int i = 1; i < n; i++){
        if (vec[i] == 0){
            int indexMayor = max_element(vec.begin(), vec.begin() + i) - vec.begin();
            if (vec[indexMayor] != 0 && vec[indexMayor] != -1){
                sum += vec[indexMayor];
            }
            vec[indexMayor] = -1;
            vec[i] = - 1;
        }
    }
    cout << sum << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}