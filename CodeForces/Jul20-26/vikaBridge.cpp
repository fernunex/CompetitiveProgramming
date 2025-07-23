//Problem: B. Vika and the Bridge
// Name: https://codeforces.com/contest/1848/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> colors(k+1, -1);
    vector<vector<int>> steps(k+1, vector<int>(2, -1));
    int val;
    for (int i=1; i <= n; i++){
        cin >> val;
        if (colors[val]!=-1){
            int diff = (i - colors[val] - 1);
            if (diff > steps[val][0]){
                steps[val][0] = diff;
                sort(steps[val].begin(),steps[val].end());
            }
            colors[val] = i;
        } else {
            steps[val][1] = i - 1;
            colors[val] = i;
        }
    }

    for (int i = 1; i <=k; i++){
        if(steps[i][1] != -1){
            int diff = (n - colors[i]);
            if (diff > steps[i][0]){
                steps[i][0] = diff;
                sort(steps[i].begin(),steps[i].end());
            }
        }
    }

    int res=INT32_MAX;
    for (int i = 1; i <=k; i++){
        if(steps[i][1] != -1){
            int maxiCol= steps[i][1]/2;
            res = min(res, max(maxiCol, steps[i][0]));
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