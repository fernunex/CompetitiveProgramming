// Fer nunex
// Scanf and white spaces

#include <stdio.h>

int main(void)
{
    int a = 5, b = 5;

    scanf(" %d/  %d", &a, &b);

    printf("a=%d, b=%d\n", a, b);

    return 0;
}
