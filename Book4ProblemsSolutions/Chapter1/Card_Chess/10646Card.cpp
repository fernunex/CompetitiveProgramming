// onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1587
// 10646 - What is the Card?

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;

    for(int t = 1; t <= n; t++){
        vector<string> v(52);
        for(int i = 0; i < 52; i++) cin >> v[i];
        int y = 0, shift = 26;
        for(int i = 0; i<3; i++){
            int l = 0;
            if(v[shift][0] < 'A') l += v[shift][0] - '0', y += l, l = 10 - l;
            else y += 10;
            shift -= l+1;
            // cout << "shs:" << y << endl;
        }
        // cout << "sh: " << shift  << "y:" << y<< endl;

        cout << "Case " << t << ": " << (y >= shift ? v[y+(25-shift)]: v[y]) << '\n';
    }


    return 0;
}