//Problem: https://codeforces.com/contest/2036/problem/C
// Name: C. Anya and 1100

#include <bits/stdc++.h>

using namespace std;

void solve(){
    string s;
    char v;
    int q, index;
    unordered_set<int> us;
    cin >> s >> q;

    s = "x" + s;

    if (s.length() < 5){
        for (int i = 0; i < q; i++){
            cin >> index >> v;
            cout << "NO\n";
        }
        return;
    }

    for (int i = 1; i < s.length() - 3; i++){
        if (s[i] == '1' &&
            s[i+1] == '1' &&
            s[i+2] == '0' &&
            s[i+3] == '0'){
                us.insert(i);
                i+=3;
            }
    }

    for (int i = 0; i < q; i++){
        cin >> index >> v;

        if (s[index] != v){// We are making a change
            us.erase(index);
            us.erase(index - 1);
            us.erase(index - 2);
            us.erase(index - 3);
            s[index] = v;
            if (v == '0' && index > 2 && s[index-2] == '1' && s[index-1] == '1' && s[index+1] == '0'){// 11[0]0
                us.insert(index-2);
            } else if (v == '0' && index > 2 && s[index-3] == '1' && s[index-2] == '1' && s[index-1] == '0')// 110[0]
            {
                us.insert(index-3);
            } else if (v == '1' && index > 1 && s[index-1] == '1' && s[index+1] == '0' && s[index+2] == '0')// 1[1]00
            {
                us.insert(index-1);
            } else if (v == '1' && s[index+1] == '1' && s[index+2] == '0' && s[index+3] == '0')// [1]100
            {
                us.insert(index);
            }
        }

        if (us.empty()){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}