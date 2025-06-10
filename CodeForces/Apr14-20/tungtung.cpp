// https://codeforces.com/contest/2094/problem/D

#include <bits/stdc++.h>
using namespace std;

//LRLR
//LLLRLR


void solve() {
	string str1, str2;

	cin >> str1 >> str2;

	int ptr1 = 0, ptr2 = 0, last1, last2;

	while(ptr1 < str1.length() || ptr2 < str2.length()){

		if (str1[0] != str2[0] || ptr1 == str1.length() || ptr2 == str2.length())
		{
			cout << "NO" << endl;
			return;
		}


		last1 = ptr1;
		while (str1[last1] == str1[ptr1] && ptr1 < str1.length()){
			ptr1++;
		}

		last2 = ptr2;
		while(str2[last2] == str2[ptr2] && ptr2 < str2.length()){
			ptr2++;
		}

		if ((ptr2 - last2) < (ptr1 - last1) || (ptr2 - last2) > (ptr1 - last1)*2)
		{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}


int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}