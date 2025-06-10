// Fer nunex
// Program that add 5% of taxes to the amount

#include <stdio.h>
#define TAX 1.05f

int main(void)
{
    float amount, amount_taxes;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    amount_taxes = amount * TAX;
    printf("With tax added: %.2f\n", amount_taxes);

    return 0;
}
