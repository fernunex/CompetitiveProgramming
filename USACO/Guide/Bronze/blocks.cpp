// https://usaco.org/index.php?page=viewproblem2&cpid=664

#include<bits/stdc++.h>
using namespace std;


int main(){
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);

    vector<int> v1(26,0), v2(26,0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s1, s2; cin >> s1 >> s2;
        for(int j = 0; j < s1.size(); j++){
            v1[s1[j]-'a']++;
        }
        for(int j = 0; j < s2.size(); j++){
            v2[s2[j]-'a']++;
        }
        int m;
        for(int i = 0; i < 26; i++) m = max(v1[i],v2[i]), v1[i] = m, v2[i] = m;
    }

    for(int i = 0; i < 26; i++) cout << v1[i] << '\n';

    return 0;
}