// Fer Nunex
/* Computes the dimensional weight of box from input provided by the user */

#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void)
{
    int height, length, width, volume, weight;
    printf("Enter height of box:");
    scanf("%d", &height);
    printf("Enter length of box:");
    scanf("%d", &length);
    printf("Enter width of box:");
    scanf("%d", &width);
      
    volume = height * length * width;
    weight = (volume + 165) / INCHES_PER_POUND;

    printf("Dimensions: %dx%dx%d\n", height, length, width);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
