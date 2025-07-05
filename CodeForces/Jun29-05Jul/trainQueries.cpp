//Problem: https://codeforces.com/contest/1702/problem/C
// Name: C. Train and Queries

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, k;

    cin >> n >> k;

    // vector<long long> routes(n);
    unordered_map<long, vector<int>> routes(n);

    long long key;
    for (int i = 0; i < n; i++){
        cin >> key;
        routes[key].push_back(i);
    }

    // Queries
    // vector<pair<long, long>> queries(k);

    long long firstAsked, secondAsked;
    int indexFirst, indexSecond;
    for (int i = 0; i < k; i++){
        // cin >> queries[i].first;
        // cin >> queries[i].second;
        cin >> firstAsked >> secondAsked;

        auto itFirst = routes.find(firstAsked);
        auto itSecond = routes.find(secondAsked);

        if (itFirst != routes.end() && itSecond != routes.end()){

            indexFirst = routes[firstAsked][0];
            indexSecond = routes[secondAsked].back();

            if (indexFirst <= indexSecond){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}