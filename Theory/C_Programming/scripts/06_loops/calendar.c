// Fernunex
// This program prints a one-month calendar starting at a given day.

#include <stdio.h>

int main(){
    int days, starting_day;

    printf("Enter number of days in month: ");
    scanf("%d", &days);
    printf("Enter starting day od the week (1=Sun, 7=Sat) : ");
    scanf("%d", &starting_day);

    for (int i = 1; i < starting_day; i++) printf("   "); // Initial spaces

    // Printing the calendar
    for (int i = 1, j = starting_day; i <= days; i++){
        printf("%2d ", i);
        
        if (j == 7){
            printf("\n");
            j = 0;
        }
        j++;
    }
    printf("\n");

}
