#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue <string> fila;

    fila.push("Primero");
    fila.push("Segundo");
    fila.push("Tercero");
    fila.push("Cuarto");

    while (!fila.empty())
    {
        cout << fila.front() << endl;
        fila.pop();
    }
    
    
    return 0;
}