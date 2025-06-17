//Problem: https://codeforces.com/contest/1879/problem/B

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n;

    cin >> n;

    vector<long long> a(n);
    vector<long long> b(n);

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; i++){
        cin >> b[i];
    }

    long long sumA = accumulate(a.begin(), a.end(), 0LL);
    long long sumB = accumulate(b.begin(), b.end(), 0LL);

    long long minASum = *min_element(a.begin(), a.end()) * n;
    long long minBSum = *min_element(b.begin(), b.end()) * n;
    cout << min(sumA+minBSum, sumB+minASum) << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}
