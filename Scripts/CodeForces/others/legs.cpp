#include <bits/stdc++.h>
using namespace std;

void solve() {
	int s;
	cin >> s;
    int animals = 0;
    animals = s/4;
    // cout << s << '\n';
    if ((s%4) == 2)
    {
        // cout << "Si" << '\n';
        animals++;
    }
    cout << animals << '\n';

}

int main() {
	int t; cin >> t; for (int i = 0; i < t; i++) {solve();}
}