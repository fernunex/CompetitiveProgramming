// Problem: 
#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  vector<char> v;
  
  for(int i = 0; i < s.size(); i++){
    if (s[i] == '0') v.push_back('0');
    if (s[i] == '1') v.push_back('1');
    if (s[i] == 'B' && v.empty() == false) v.pop_back();
  }

for(int i = 0; i < v.size(); i++){
    cout << v[i];
  }
  cout << endl;


  return 0;
}