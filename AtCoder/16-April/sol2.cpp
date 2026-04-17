// Problem: 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    cin >> n;
    vector<int> v;
  
  for(int i = 0; i < n; i++) cin >> s, v.push_back(s);

    
    int res = 5000000;
    for(int i = -100; i <= 100; i++){
        int pos = 0;
        for(int j=0; j < v.size(); j++){
            pos += (v[j]-i)*(v[j]-i);
        }
        res = min(res, pos);
    }
  cout << res << endl;


  return 0;
}