// Fernunex
// This program calculates the greatest common divisior between two integers

#include <stdio.h>

int main(){
    int m, n, aux;
    
    printf("Enter two integers: ");
    scanf("%d %d", &m, &n);

    while (n > 0){
        aux = n;
        n = m % n;
        m = aux;
    }

    printf("Greatest common divisior: %d\n", m);


}
