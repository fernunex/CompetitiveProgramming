// https://codeforces.com/contest/1851/problem/B
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, even = 0, odd = 0;

	cin >> n;

	int values[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> values[i];
		if (values[i] % 2 == 0)
		{
			even++;
		} else{
			odd++;
		}
	}

	if (even == n || even == n)
	{
		cout << "YES" << endl;
		return;
	} else{
		int values2[n];
		copy(values, values + n, values2);
		sort(values2, values2 + n);

		for (int i = 0; i < n; ++i)
		{
			if (values[i] % 2 == 0 && values2[i] % 2 != 0)
			{
				cout << "NO" << endl;
				return;
			} else if (values[i] % 2 != 0 && values2[i] % 2 == 0)
			{
				cout << "NO" << endl;
				return;
			}
		}


		/* TOO slow sorting manually O(n²)
		int temp, minIndex;
		for (int i = 0; i < n - 1; ++i)
		{
			minIndex = i;
			for (int j = i + 1; j < n; ++j)
			{
				if (values[minIndex] > values[j])
				{
					minIndex = j;
				}
			}

			if (values[minIndex] % 2 == 0 && values[i] % 2 != 0)
			{
				cout << "NO" << endl;
				return;
			} else if (values[minIndex] % 2 != 0 && values[i] % 2 == 0)
			{
				cout << "NO" << endl;
				return;
			} else {
				temp = values[i];
				values[i] = values[minIndex];
				values[minIndex] = temp;
			}
		}
		*/
	}
	cout << "YES" << endl;

}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}