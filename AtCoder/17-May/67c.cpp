// https://atcoder.jp/contests/abc067/tasks/arc078_a

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; 
    cin >> n;
    vector<long long> v(n), a(n), b(n);
    cin >> v[0];
    a[0] = v[0];
    for(int i = 1; i<n; i++) cin >> v[i], a[i] = a[i-1]+v[i];
    b[n-1] = v[n-1];
    for(int i = n-2; i>=0; i--) b[i] = b[i+1] + v[i];
    long long m = INT64_MAX;
    for(int i = 0; i < n - 1; i++){
        m = min(m, abs(a[i]-b[i+1]));
    }
    cout << m << '\n';

    return 0;
}