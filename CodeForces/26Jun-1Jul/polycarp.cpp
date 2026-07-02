//https://codeforces.com/contest/1759/problem/A

#include<bits/stdc++.h>
using namespace std;

string word = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

void solve(){
    string s; 
    cin >> s;
    if(word.find(s) != string::npos) cout << "Yes\n";
    else cout << "No\n";
    return;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t; while(t--) solve();

    return 0;
}