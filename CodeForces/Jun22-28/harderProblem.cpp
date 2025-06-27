//Problem: https://codeforces.com/contest/2044/problem/D

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<int> nums(n);

    // set of numbers 1 to n
    unordered_set<int> notAppeard;
    unordered_set<int> appeared;

    for (int i = 1; i <= n; i++)
    {
        notAppeard.insert(i);
    }

    int val;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        nums[i] = val;
        appeared.insert(val);
        notAppeard.erase(val);
    }

    for (int i = 0; i < n; i++)
    {
        if (appeared.find(nums[i]) != appeared.end()){ // output the first element that appeared
            cout << nums[i] << ' ';
            appeared.erase(nums[i]);
        } else {
            auto node = notAppeard.extract(notAppeard.begin());
            cout << node.value() << ' ';
        }
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