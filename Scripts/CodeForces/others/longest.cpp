#include <iostream>
using namespace std;


int main() {
    int cont = 1;
    int aux = 1;
    // int v[] = {8,5,7,9,8,13,99};
    // int v[] = {2,2,3,0,4};
    int v[] = {1,5,8,2,4,6};


    int n = sizeof(v)/sizeof(int);

    
    for(int i = 0; i < (n - 1); i++){
        int max = v[i+1];
        for (int j = i + 1; j < n; j++)
        {
            if(max < v[j]){
                cont++;
                max = v[j];
            }
        }
        if (aux < cont){
            aux = cont;
        }
        cont = 1;
    }

    cout << aux;
    // return aux;
    return 0;
} 


