// https://atcoder.jp/contests/abc045/tasks/arc061_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    long long res = 0;

    for(int i = 0; i < (1 << (s.size()-1)); i++){
        long long buff = 0;
        for(int j = 0; j < s.size(); j++){
            buff = buff*10 + s[j] - '0';
            if(i & (1 << j)) res += buff, buff = 0;
        }
        res += buff, buff = 0;
    }
    cout << res << '\n';

    return 0;
}