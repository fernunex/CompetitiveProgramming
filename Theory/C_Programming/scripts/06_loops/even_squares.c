// Fernunex
// Print all even squares between 1 and n

#include <stdio.h>

int main(){
    int n;

    printf("Enter n (e.g. 100, 230, 40, etc): ");
    scanf("%d", &n);

    for (int i = 2; i*i <= n; i += 2) printf("%d\n", i*i);

}
