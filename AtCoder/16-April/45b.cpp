//https://atcoder.jp/contests/abc045/tasks/abc045_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a,b,c;
    cin >> a >> b >> c;
    int ai=0, bi=0, ci=0;
    char curr = a[ai++];

    while (true)
    {
        if(curr == 'a') {if (ai == a.size()) {cout << "A\n"; return 0;} else curr = a[ai++];}
        if(curr == 'b') {if (bi == b.size()) {cout << "B\n"; return 0;} else curr = b[bi++];}
        if(curr == 'c') {if (ci == c.size()) {cout << "C\n"; return 0;} else curr = c[ci++];}
    }
    

}