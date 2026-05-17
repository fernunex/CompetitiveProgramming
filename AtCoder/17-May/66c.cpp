// https://atcoder.jp/contests/abc066/tasks/arc077_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    list<int> v;
    for(int i = 0; i < n; i++){
        int val; cin >> val;
        if(i&1) v.emplace_front(val);
        else v.emplace_back(val);
    }
    if(n&1){
        auto it = v.rbegin();
        while (it != v.rend())
        {
            cout << *it++ << " ";
        }
    } else{
        auto it = v.begin();
        while (it != v.end())
        {
            cout << *it++ << " ";
        }
    }
    cout << '\n';

    return 0;
}