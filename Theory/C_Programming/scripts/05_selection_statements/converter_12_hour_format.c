#include <stdio.h>

int main(){
    int hours, minutes;
    
    printf("Enter a 24-hour time: ");
    scanf("%d :%d", &hours, &minutes);
    
    printf("Equivalent 12-hour time: ");
    if (hours > 12)
        if (hours == 24)
            printf("%d:%.2d AM", hours - 12, minutes);
        else
        printf("%d:%.2d PM", hours - 12, minutes);
    
    else 
        if (hours == 12)
            printf("%d:%.2d PM", hours, minutes);
        else
        printf("%d:%.2d AM", hours, minutes);
    
}
