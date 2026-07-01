// https://codeforces.com/contest/1705/problem/A

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;
  vector<int> v(n * 2);
  for (int i = 0; i < 2 * n; i++)
    cin >> v[i];

  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    if (v[i + n] - v[i] < x) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";

  return;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}