//Problem: https://dmoj.ca/problem/cco07p2

#include <bits/stdc++.h>
using namespace std;

void solve(){
    int num_snowflakes, val;
    //auto result_insert;
    unordered_set<string> mySet;
    cin >> num_snowflakes;


    // guardando los snowflakes
    for (int i = 0; i < num_snowflakes; ++i)
    {
        string snowflake = "";
        string snowflakeFlipped = "";
        for (int j = 0; j < 6; ++j)
        {
            cin >> val;
            snowflake += to_string(val);
            snowflakeFlipped = to_string(val) + snowflakeFlipped;
        }
        
        if (mySet.insert(snowflake).second != true || mySet.insert(snowflakeFlipped).second != true) // ya existe
        {
            cout << "Twin snowflakes found." << endl;
        }


        //cout << "Snowflake " << i << ": " << snowflake << "\n";
    }

    // Permutaciones a la derecha e izquierda
    // 123456 -> 612345 -> 651234 .... y buscar si ya existe
    // 123456 -> 234561 -> 345612 .... y buscar si ya existe
    for (string snowPrueba : mySet)
    {
        // Permutacion Derecha
        //cout << snowPrueba << " Derecha" << endl;
        for (int i = 1; i < snowPrueba.length(); ++i)
        {
            string part1 = snowPrueba.substr(0, snowPrueba.length() - i);
            string part2 = snowPrueba.substr(snowPrueba.length() - i, snowPrueba.length());
            string total = part2 + part1;
            //cout << total << endl;
            if (mySet.find(total) != mySet.end()) {
                cout << "Twin snowflakes found.\n";
                return;
            }
        }
        //cout << endl;

        // Permutacion Izquierda
        //cout << snowPrueba << " Izquierda" << endl;
        for (int i = 1; i < snowPrueba.length(); ++i)
        {
            string part1 = snowPrueba.substr(0, i);
            string part2 = snowPrueba.substr(i, snowPrueba.length() - i);
            string total = part2 + part1;
            if (mySet.find(total) != mySet.end()) {
                cout << "Twin snowflakes found.\n";
                return;
            }
        }
        //cout << endl;
    }
    cout << "No two snowflakes are alike.\n";
}

int main(){
    solve();
    return 0;
}