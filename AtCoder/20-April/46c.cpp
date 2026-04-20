//https://atcoder.jp/contests/abc046/tasks/arc062_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long nume=1, deno=1, ti, ai, mul;

    for(int i = 0; i < n; i++){
        cin >> ti >> ai;
        mul = max((nume+ti-1)/ti, (deno+ai-1)/ai);
        nume = ti*mul;
        deno = ai*mul;
    }

    cout << nume + deno << '\n';

    return 0;
}