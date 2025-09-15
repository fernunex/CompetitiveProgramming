#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);

  double t;
  cin >> t;
  cout << "El radio es: " << fixed << setprecision(2) << t*t*3.1416;

  return 0;
}