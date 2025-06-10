// https://codeforces.com/contest/2020/problem/A
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n, k, sumOperations;

	cin >> n >> k;
	sumOperations = 0;

	if (k == 1)
	{
		cout << n << endl;
		return;
	}
	while(n != 0){
		// Power descompositions
		sumOperations += n % k;
		n = n/k;
	}
	cout << sumOperations << endl;
}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}