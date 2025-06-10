//Fernunex
/* Program that prompts the user for a teperature in farenheit degrees and prints the equivalence in degrees celsius*/

#include <stdio.h>
#define SCALE_FACTOR (5.0f / 9.0f)
#define FREEZING_POINT 32.0f

int main(void){

    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_POINT) * SCALE_FACTOR;

    printf("The temperature in celsius is: %.2f\n", celsius);

}
