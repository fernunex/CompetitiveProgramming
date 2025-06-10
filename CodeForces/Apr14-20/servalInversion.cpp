// https://codeforces.com/contest/1789/problem/B
#include <bits/stdc++.h>
using namespace std;


void solve() {
	int n;
	cin >> n;

	string s;
	cin >> s;

	int leftIndex = 0, rightIndex = n - 1;
	int index2Change = -1;

	while (leftIndex < rightIndex){
		if (s[leftIndex] != s[rightIndex]) // Si es diferente necesitamos de cambiarlo
		{
			if (index2Change != -1 && rightIndex != (index2Change - 1)) // si no son consecutivos
			{
				cout << "NO" << endl;
				return;
			} else{
				index2Change = rightIndex;
			}
		}
			rightIndex--;
			leftIndex++;
	}
	cout << "YES" << endl;

}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}