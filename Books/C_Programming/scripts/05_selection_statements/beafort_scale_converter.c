// Fer
// Print a description based on the wind speed (in knots)

#include <stdio.h>

int main(){
    float speed;

    printf("Enter a wind speed (in knots): ");
    scanf("%f", &speed);
    
    if (speed < 1) printf("Calm");
    else if (speed <= 3) printf("Light air");
    else if (speed <= 27) printf("Breeze");
    else if (speed <= 47) printf("Gale");
    else if (speed <= 63) printf("Storm");
    else printf("Hurricane");


    return 0;
}
