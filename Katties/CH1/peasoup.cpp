//https://open.kattis.com/problems/peasoup
//Author: Fer Nuñez

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string res = "";

    for(int i = 0; i < n; i++){

        int k;
        bool s1 = false, s2 = false;
        string actual;
        cin >> k;
        cin.ignore(); 
        getline(cin, actual);
        for(int j = 0; j < k; j++){
            string d;
            getline(cin, d);
            // cin >> d;
            if(d.size() == 8 && d.find("pea soup",0,8) != string::npos) s1 = true;
            if(d.size() == 8 && d.find("pancakes",0,8) != string::npos) s2 = true;
            // cout << i<<"buscando en : " << d << " v1: " << s1 << "  v2: "<< s2 << endl;
        }
        // cout << "1s: " << s1 << "  2s: " << s2 << endl;
        if(s1 && s2) {cout << actual << endl; return 0;}
    }
    cout << "Anywhere is fine I guess\n";

    


    return 0;
}