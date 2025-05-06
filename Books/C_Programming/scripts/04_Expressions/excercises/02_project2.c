// Fer nunex
// Program that reverse 2-digit number, e.g., 285 to 582

#include <stdio.h>

int main(void){

    int num, reversed;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    reversed = (num % 10) * 100;
    reversed += ((num % 100) / 10) * 10;
    reversed += num / 100;

    printf("The reversal is: %d\n", reversed);
    printf("The reversal is: %d%d%d\n", num % 10, (num % 100) / 10, num / 100);

    return 0;
}
