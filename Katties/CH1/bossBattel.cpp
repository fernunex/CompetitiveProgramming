// https://open.kattis.com/problems/bossbattle
// Author: Fer Nuñez

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int k=n-2, b=0, r=1;
    while(abs(k-b) > 1) k++, b+=2, r++;
    cout << r << endl;

    return 0;
}