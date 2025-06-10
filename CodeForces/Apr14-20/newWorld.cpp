// https://codeforces.com/contest/2072/problem/A
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, k, p, times;

	cin >> n >> k >> p;

	k = abs(k);

	if (k == 0)
	{
		cout << 0 << endl;
		return;
	}

		times = (k + p - 1) / p;
		if (times <= n)
		{
			cout << times << endl;
		} else {
			cout << -1 << endl;
		}
}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}