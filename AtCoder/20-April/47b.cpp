// https://atcoder.jp/contests/abc047/tasks/abc047_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int w, h, n, x, y, a, ow=0, oh=0;
    cin >> w >> h >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> a;
        if(a == 1) ow = max(ow,x);
        else if(a == 2) w = min(w,x);
        else if(a == 3) oh = max(oh,y);
        else  h = min(h,y);
    }

    cout << max(0, w-ow) * max (0, h-oh) << '\n';
    

    return 0;
}