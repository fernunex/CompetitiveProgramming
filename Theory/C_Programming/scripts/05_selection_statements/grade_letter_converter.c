#include <stdio.h>

int main(){
    int grade;
    
    printf("Enter a numerical grade: ");
    scanf("%d", &grade);

    grade = (grade > 100) || (grade < 0) ? -1 : (grade / 10);

    printf("Letter grade: ");
    switch (grade){
        case 10: case 9: printf("A"); break;
        case 8 : printf("B"); break;
        case 7 : printf("C"); break;
        case 6 : printf("D"); break;
        case 5: case 4: case 3: case 2: case 1: case 0 : printf("F"); break;
        default: printf("ERRRRRRRRRRRRRR");
    }

}
