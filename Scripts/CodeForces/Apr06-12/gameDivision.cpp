// https://codeforces.com/contest/2040/problem/A
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, k, candidato, found, difference;

	cin >> n;
	cin >> k;

	int vlaues[n];

	// Leer los datos
	for (int i = 0; i < n; ++i)
	{
		cin >> vlaues[i];
	}

	// Ciclo O(n²)
	for (int i = 0; i < n; ++i)
	{
		candidato = vlaues[i];
		//cout << candidato << endl;
		found = 1; // Decimos que este es el bueno
		for (int j = 0; j < n; ++j)
		{
			if (i != j) // no probaremos ellos consigo mismos
			{
				difference = abs(candidato - vlaues[j]);
				//cout << difference << " ";

				if (difference % k == 0) // Si es divisible terminamos
				{
				//cout << "Entro: " << difference << endl;
					found = 0;
					break;
				}
			}
		}

		if (found == 1) // Si el candidato fue porque jamas entro al
			// if de si era divisible
		{
			cout << "YES" << endl;
			cout << i + 1 << endl;
			return;
		}
	}
	cout << "NO" << endl;
}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}