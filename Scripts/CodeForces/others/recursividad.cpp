#include <bits/stdc++.h>
using namespace std;

void fun(int n){
    if(n<1){
        // std::cout << 0 << std::endl;
        return;
    }
    std::cout << n << std::endl;
    fun(n - 1);
}

void fun2(int n){
    if(n<1){ // Caso base
        std::cout << "Entra a caso Base" << std::endl;
        return;
    }
    std::cout << n << std::endl; // Orden descendente
    fun2(n-1); // Caso Recursivo
    std::cout << n << std::endl;// Orden ascendiente
    
}

int main() {
    // fun(15);
    fun2(15);

    return 0;
}