// Fer nunex
// Program that reverse 2-digit number, e.g., 28 to 82

#include <stdio.h>

int main(void){

    int num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    printf("The reversal is: %d\n", num % 10 * 10 + num / 10);

    return 0;
}
