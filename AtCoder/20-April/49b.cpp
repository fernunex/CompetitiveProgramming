// https://atcoder.jp/contests/abc049/tasks/abc049_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, w;
    cin >> h >> w;
    string s;
    for (int i = 0; i < h; i++)
    {
        cin >> s;
        cout << s << '\n' << s << '\n';
    }
    
    return 0;
}