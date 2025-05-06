// Fer Nunex
// Formating a output using differents m (minimum width field) and p (precision) values

#include <stdio.h>

int main(void)
{
    int i;
    float j;

    i = 47;
    j = 13.48f;

    printf("|%10d|%10.4d|%-10.4d|%d|\n", i, i, i, i);
    printf("|%10f|%10.4f|%-10.4e|%.1g|%.2g|%.3g|%g|\n", j, j, j, j, j, j, j);

}
