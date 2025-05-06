// https://codeforces.com/contest/2013/problem/A
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int fruits, blenderRate, zhanRate, minimumRate;

	cin >> fruits >> blenderRate >> zhanRate;

	minimumRate = min(blenderRate, zhanRate);

	int seconds = 0;

	seconds = fruits / minimumRate;
	if (fruits % minimumRate != 0)
	{
		seconds++;
	}

	cout << seconds << endl;


}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}