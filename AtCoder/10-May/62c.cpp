// https://atcoder.jp/contests/abc062/tasks/arc074_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long h, w;
    cin >> h >> w;

    if(h % 3 == 0 | w % 3 == 0){
        cout << "0\n";
    }else{
        long long mi = min(h,w);


        long long h1 = h/2, h2 = (h+2-1)/2;
        for(long long i = 1; i <= (w+2-1)/2; i++){
            long long a1 = i*h, a2 = (w-i) * h1, a3 = (w-i)*h2;
            // cout << "i:" << i << "|" << a1 << "|" << a2 << "|" << a3 << endl;
            mi = min(mi, max({a1, a2, a3})-min({a1, a2, a3}));
        }
        long long w1 = w/2, w2 = (w+2-1)/2;
        for(long long i = 1; i <= (h+2-1)/2; i++){
            long long a1 = i*w, a2 = (h-i) * w1, a3 = (h-i)*w2;
            // cout << "i:" << i << "|" << a1 << "|" << a2 << "|" << a3<< "|h-i=" << h-i << endl;
            mi = min(mi, max({a1, a2, a3})-min({a1, a2, a3}));
        }
        cout << mi << '\n';
    }
    return 0;
}