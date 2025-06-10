//https://codeforces.com/contest/1838/problem/A
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	int value, found = 0;
	int maxValue = -1;

	cin >> n;

	int arreglo[n];
	set<int> miSet;

	for (int i = 0; i < n; ++i)
	{
		cin >> value;
		if (value > maxValue)
		{
			maxValue = value;
		}

		if (value < 0) // Si nos encontramos un valor negativo terminamos
		{
			found = value;
		} else if (found == 0) // Aun no hemos encontrado uno negativo
		{// Lo guardamos en la lista y en un set si no es negativo
			arreglo[i] = value;
			miSet.insert(value);
		}
	}

	if (found != 0) // encontramos un negativo
	{
		cout << found << endl;
		return;
	} else {
		cout << maxValue << endl;
		return;
	}


	/*
	// Encontramos unos elementos que puedan ser la semilla
	int v1, v2;
	for (int i = 0; i < n; ++i){ // O(n²)
		v1 = arreglo[i];
		if (v1 == 0) // Si es un 0 nos puede dar un falso positivo
			{
				continue;
			}
		for (int j = 0; j < n; ++j)
		{
			if (i != j) // No los comparamos con ellos mismos
			{
				v2 = arreglo[j];
				if (v2 == 0 || v2 == v1) // Si es un 0 o igual a v1 nos puede dar un falso positivo
				{
					continue;
				}

				if (miSet.count(abs(v1 - v2))) // Encontramos una pareja que puede generar la secuencia
				{
					cout << v1 << endl;
					return;
				}
			}
		}
	}
	cout << 0 << endl;
	*/
}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}