//Problem: https://codeforces.com/contest/1672/problem/C
// Name: C. Unequal Array

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, startIndex = 0, finishIndex = 0;

    cin >> n;

    vector<long long> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if (n == 2){
        cout << "0\n";
        return;
    }

    for (int i = 0; i < n - 1; i++){
        if (startIndex == 0){
            if (arr[i] == arr[i+1]){
                startIndex = i + 1;
            }
        } else {
            if (arr[i] == arr[i+1]){
                finishIndex = i;
            }
        }
    }

    if (startIndex == 0|| finishIndex == 0){
        cout << "0\n";
    } else if (startIndex == finishIndex){
        cout << "1\n";
    } else{
        cout << finishIndex - startIndex <<"\n";
    }


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}