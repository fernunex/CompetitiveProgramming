// https://atcoder.jp/contests/abc051/tasks/abc051_c

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;

    int r, u;
    r = tx - sx;
    u = ty - sy;

    //1
    for(int i = 0; i < u; i++) cout << 'U';
    for(int i = 0; i < r; i++) cout << 'R';

    //2
    for(int i = 0; i < u; i++) cout << 'D';
    for(int i = 0; i < r; i++) cout << 'L';

    //3
    cout << 'L';
    for(int i = 0; i < u+1; i++) cout << 'U';
    for(int i = 0; i < r+1; i++) cout << 'R';
    cout << 'D';

    //4
    cout << 'R';
    for(int i = 0; i < u+1; i++) cout << 'D';
    for(int i = 0; i < r+1; i++) cout << 'L';
    cout << 'U' << '\n';


    return 0;
}