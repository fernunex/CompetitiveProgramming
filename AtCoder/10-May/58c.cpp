// https://atcoder.jp/contests/abc058/tasks/arc071_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string s;

    int vs[n][26];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 26; j++){
            vs[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            vs[i][s[j]-'a']++;
        }
    }

    for(int i = 0; i < 26; i++){
        int m = 55;
        for(int j = 0; j < n; j++){
            // cout << vs[i][j] << " ";
            m = min(vs[j][i], m);
        }
        // cout << '\n';
        for(int k = 0; k < m; k++) cout << (char)('a'+i);
    }
    cout << '\n';

    return 0;
}