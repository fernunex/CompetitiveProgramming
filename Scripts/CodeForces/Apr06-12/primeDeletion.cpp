// https://codeforces.com/contest/1861/problem/A
#include <bits/stdc++.h>
using namespace std;


void solve() {
	string num;

	cin >> num;

	for (int i = 0; i < 10; ++i)
	{
		if (num[i] == '1')
		{
			cout << 13 << endl;
			return;
		} else if (num[i] == '3')
		{
			cout << 31 << endl;
			return;
		}
	}


}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}