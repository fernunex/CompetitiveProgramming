// Program that convert decimal (0-32767) to octal.
// Fer nunex

#include <stdio.h>

int main(void){
    
    int num_dec, n0, n1, n2, n3, n4;
    
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &num_dec);

    n0 = num_dec % 8;
    n1 = num_dec / (8) % 8;
    n2 = num_dec / (8*8) % 8;
    n3 = num_dec / (8*8*8) % 8;
    n4 = num_dec / (8*8*8*8) % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", n4, n3, n2, n1, n0);
    return 0;
}
