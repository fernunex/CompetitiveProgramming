// https://atcoder.jp/contests/abc047/tasks/arc063_a

#include<bits/stdc++.h>
using namespace std;

// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     string s;
//     cin >> s;

//     int c = 0;
//     for(int i = 0; i < s.size() - 1; i++) c += (s[i] != s[i+1]);

//     cout << c << '\n';
    
//     return 0;
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    s.erase(unique(s.begin(), s.end()), s.end());
    cout << s.size() - 1 << '\n';
    
    return 0;
}