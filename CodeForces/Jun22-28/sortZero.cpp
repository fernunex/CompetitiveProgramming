//Problem: https://codeforces.com/contest/1712/problem/C

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    
    int indexBreak = 0;
    for (int i = n - 1; i > 0; i--){ // Find the index of the last bad index
        if (arr[i] < arr[i - 1]){
            indexBreak = i;
            break;
        }
    }
    
    if (indexBreak > 0){ // Find the index until when the numbers of the left will change the numbers of the right
        unordered_set<int> s(arr.begin(), arr.begin() + indexBreak);
        // for (int i = 0; i <= indexBreak; i++)
        // {
        //     // cout << "Inserting f1: " << arr[i] << endl;
        //     s.insert(arr[i]);
        // }
        
        int indexBreakUpdated = indexBreak - 1;
        for (int i = n - 1; i > indexBreak - 1; i--)
        {
            if (s.count(arr[i]) != 0){
                indexBreakUpdated = i;
                break;
            }
        }

        for (int i = indexBreak - 1; i <= indexBreakUpdated; i++)
        {
            // cout << "Inserting f2: " << arr[i] << endl;
            // cout << "Index: " << i << endl;
            s.insert(arr[i]);
        }

        cout << s.size() << endl;

    } else{
        cout << "0\n";
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}