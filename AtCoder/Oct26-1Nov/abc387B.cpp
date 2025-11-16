//Problem: https://atcoder.jp/contests/abc387/tasks/abc387_b
// Name: B - 9x9 Sum
// Author: Fer Nunez

#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int x;
    cin >> x;
    int res = 0;
    for(int i = 1; i < 10; i++){
        for (int j = 1; j < 10; j++){
            int mul = i*j;
            if (mul != x) res += mul;
        }
    }
    cout << res << endl;
    return 0;
}