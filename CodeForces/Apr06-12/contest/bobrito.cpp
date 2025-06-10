// https://codeforces.com/contest/2094/problem/B
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, m, l, r;
	int right, left;

	cin >> n;
	cin >> m;
	cin >> l;
	cin >> r;

	if (m >= -l)
	{
		left = l;
		right = m + l;
	} else {
		left = -m;
		right = 0;
	}

	cout << left << " " << right << endl;
	


}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}