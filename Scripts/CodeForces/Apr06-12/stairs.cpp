// https://codeforces.com/contest/1950/problem/A
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;

/*
	if (b > a)
	{
		if (b < c)
		{
			cout << "STAIR" << endl;
		} else {
			cout << "PEAK" << endl;
		}
	} else {
		cout << "NONE" << endl;
	}
*/
	if (a < b && b < c)
	{
		cout << "STAIR" << endl;
	} else if (a < b && b > c)
	{
		cout << "PEAK" << endl;
	} else {
		cout << "NONE" << endl;
	}

}

int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}