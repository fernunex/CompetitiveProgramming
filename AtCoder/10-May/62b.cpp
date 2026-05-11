// https://atcoder.jp/contests/abc062/tasks/abc062_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, w;
    cin >> h >> w;
    string s;
    cout << string(w+2, '#') << '\n';
    for(int i = 0; i < h; i++){
        cin >> s;
        cout << '#' << s << "#\n";
    }
    cout << string(w+2, '#') << '\n';


    return 0;
}