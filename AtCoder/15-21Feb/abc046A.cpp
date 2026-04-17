// Problem: https://atcoder.jp/contests/abc046/tasks/abc046_a

#include<bits/stdc++.h>

using namespace std;

int main(){
    set<int> s;
    int v;
    cin >> v;
    s.insert(v);
    cin >> v;
    s.insert(v);
    cin >> v;
    s.insert(v);
    cout << s.size() << endl;

    return 0;
}