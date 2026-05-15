// https://atcoder.jp/contests/abc063/tasks/abc063_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    sort(s.begin(), s.end());
    // unique(s.begin(), s.end());
    for(int i = 0; i < s.size()-1; i++){
        if(s[i]==s[i+1]){
            cout << "no\n";
            return 0;
        }
    }
    cout << "yes\n";

    return 0;
}