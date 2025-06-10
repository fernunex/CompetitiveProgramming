// https://codeforces.com/contest/1780/problem/A
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, firstOdd, secondOdd, thirdOdd, firstEven, secondEven;
	firstOdd = -1;
	secondOdd = -1;
	thirdOdd = -1;
	firstEven = -1;
	secondEven = -1;


	cin >> n;

	int val;
	for (int i = 0; i < n; ++i)
	{
		cin >> val;
		if (firstOdd == -1 && val % 2 != 0)
		{
			firstOdd = i + 1;
			continue;
		}
		if (secondOdd == -1 && val % 2 != 0)
		{
			secondOdd = i + 1;
			continue;
		}
		if (thirdOdd == -1 && val % 2 != 0)
		{
			thirdOdd = i + 1;
			continue;
		}
		if (firstEven == -1 && val % 2 == 0)
		{
			firstEven = i + 1;
			continue;
		}
		if (secondEven == -1 && val % 2 == 0)
		{
			secondEven = i + 1;
			continue;
		}
	}

	if (firstOdd != -1 && secondOdd != -1 && thirdOdd != -1)
	{
		cout << "YES" << endl;
		cout << firstOdd << " " << secondOdd << " " << thirdOdd << endl;
	} else if (firstOdd != -1 && firstEven != -1 && secondEven != -1)
	{
		cout << "YES" << endl;
		cout << firstOdd << " " << firstEven << " " << secondEven << endl;
	} else {
		cout << "NO" << endl;
	}

}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}