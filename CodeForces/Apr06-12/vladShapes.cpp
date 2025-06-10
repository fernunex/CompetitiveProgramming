//https://codeforces.com/contest/1926/problem/B
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n_size, onesFirst, onesSecond, celda;
	onesFirst = 0;
	onesSecond = 0;
	int firstApparence = 0;
	
	cin >> n_size;
	//cout << "jola" << n_size << endl;

	for (int i = 0; i < n_size; ++i)
	{
		for (int j = 0; j < n_size; ++j)
		{
			scanf("%1d", &celda);
			if (celda == 1 && firstApparence == 0)
			{
				onesFirst++;
			} else if (celda == 1 && firstApparence == 1)
			{
				onesSecond++;
			}
		}

		if (onesFirst != 0)
		{
			firstApparence = 1;
		}

		if (onesSecond != 0)
		{
			firstApparence = 2;
		}
	}

		if (onesFirst != 0 && onesSecond != 0) // Seguro que entrara, es hasta redundante
		{
			if (onesFirst == onesSecond)
			{
				cout << "SQUARE" << endl;
				return;
			} else {
				cout << "TRIANGLE" << endl;
				return;
			}
		}


}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}