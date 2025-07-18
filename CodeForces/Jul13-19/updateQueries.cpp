//Problem: https://codeforces.com/contest/1986/problem/C
// Name: C. Update Queries

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, m;
    string res, subs;

    cin >> n >> m >> res;

    vector<int> index(m);
    for (int i = 0; i < m; i++){
        cin >> index[i];
    }
    
    sort(index.begin(), index.end());
    cin >> subs;
    vector<char> letters(m);
    for (int i = 0; i < m; i++){
        letters[i] = subs[i];
    }
    sort(letters.begin(), letters.end());


    int left=0, right=m-1;
    res[index[left]-1] = letters[left];
    left++;
    for (int i = 1; i < m; i++){
            if (index[i] == index[i-1]){
                right--;
            } else {
                res[index[i]-1] = letters[left];
                left++;
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