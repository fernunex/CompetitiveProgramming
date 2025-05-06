// https://codeforces.com/contest/2008/problem/A
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int ones, twos;
	cin >> ones;
	cin >> twos;

	if (ones % 2 == 0 && twos % 2 == 0) // Son par ambos
	{
		cout << "YES" << endl;
	} else if (ones % 2 == 0 && ones != 0) // ones par twos even
	{
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	//cout << "1s:" << ones << endl;
	//cout << "2s:" << twos << endl;


}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}