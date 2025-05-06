// Fer nunex
// Program that accepts a date "mm/dd/yyyy" from the user and then displays it in the form "yyyymmdd"

#include <stdio.h>

int main(void){
    
    int month = 1, day = 1, year = 1999;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("You entered the date %.4d%.2d%.2d\n", year, month, day);

    return 0;
}
