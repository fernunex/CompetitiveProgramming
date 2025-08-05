//Problem: https://codeforces.com/contest/1982/problem/C
// Name: C. Boring Day
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n+1);
    for (int i = 0; i < n; i++){
        cin >> v[i];
    }
    v.push_back(0);

    int left=0, right=0, res=0;
    long long sum;
    while (right < n){
        sum = 0;
        while (sum < l && right < n) sum += v[right++];
        right--;

        if (sum >= l && sum <= r){
            res++;
            right++;
            left = right;
            // cout << "1:El val:" << sum <<endl;
        } else {
            while (right < n){

                if (sum > r) sum -= v[left++];
                                
                if (sum < l){
                    sum += v[++right];
                }
                if (sum >= l && sum <= r){
                        res++;
                        right++;
                        left = right;
                        // cout << "2:El val:" << sum <<endl;
                        break;
                }
            }
        }
    }
    cout << res << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}