// https://codeforces.com/contest/2094/problem/C
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, num, max = -9;
	cin >> n;
	int nums[n * 2];
	set<int> miSet;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> nums[i + j + 1];
			miSet.insert(nums[i+j+1]);
		}
	}


	for (int i = 1; i <= n * 2; ++i)
	{
		if (miSet.count(i))
		{
			continue;
		}
		nums[0] = i;
		break;
	}

	for (int i = 0; i < n * 2 - 1 ; ++i)
	{
		cout << nums[i] << " ";
	}

	cout << nums[n * 2 - 1] << endl;

}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}