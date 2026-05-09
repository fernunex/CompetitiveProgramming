// https://atcoder.jp/contests/abc057/tasks/abc057_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> ns, ms;

    int a,b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        ns.push_back({a,b});
    }
    for(int i = 0; i < m; i++){
        cin >> a >> b;
        ms.push_back({a,b});
    }

    for(int i = 0; i < n; i++){
        int index = 0, dis = INT32_MAX;
        for(int j = 0; j < m; j++){
            int new_dis = abs(ns[i].first-ms[j].first) + abs(ns[i].second-ms[j].second);
            if( new_dis < dis){
                index = j;
                dis = new_dis;
            }
        }
        cout << index + 1 << '\n';
    }


    return 0;
}