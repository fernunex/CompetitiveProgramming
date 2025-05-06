//https://codeforces.com/contest/1741/problem/B
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;

	if (n == 3)
	{
		cout << "-1" << endl;
	} else if ( n == 5)
	{
		cout << "5 4 1 2 3" << endl;
	} else {
		int posI = 1;
		for (int i = n; i > 1; i--)
		{
			if (posI == i)
			{
				cout << i - 1 << " ";
				cout << i << " ";
				i--;
				posI++;
			} else {
				cout << i << " ";				
			}
			posI++;
		}
		cout << 1 << endl;
	}


}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}