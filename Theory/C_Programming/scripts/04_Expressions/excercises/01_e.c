
#include <stdio.h>

int main(void){

    int i, j, k;
   
    printf("Ex 1.\n");
    /*a)*/
    i = 5; j = 3;
    printf("%d %d\n", i / j, i % j);

    /*b*/
    i = 2; j = 3;
    printf("%d\n", (i + 10) % j);

    /*c*/ 
    i = 7; j = 8; k = 9;
    printf("%d\n", (i + 10) % k / j);

    /*d*/
    i = 1; j = 2; k = 3;
    printf("%d\n", (i + 5) % (j + 2) / k);

    /************************************/
    printf("\nEx 3 y 4.\n");
    printf("%d\n%d\n%d\n%d\n", 8/5, -8/5, 8/-5, -8/-5 );

    printf("\nEx 5 y 6.\n");
    printf("%d\n%d\n%d\n%d\n", 8%5, -8%5, 8%-5, -8%-5 );
    
    /************************************/
    printf("\nEx 9.\n");
    /*A*/
    i = 7; j = 8;
    i *= j + 1;
    printf("%d %d\n", i , j);
    /*B*/
    i = j = k = 1;
    i += j += k;
    printf("%d %d %d\n", i , j, k);
    /*C*/
    i = 1; j = 2; k = 3;
    i -= j -= k;
    printf("%d %d %d\n", i , j, k);
    /*D*/
    i = 2; j = 1, k = 0;
    i *= j *= k;
    printf("%d %d %d\n", i , j, k);
   
    /************************************/
    printf("\nEx 10.\n");
    /*A*/
    i = 6;
    j = i += i;
    printf("%d %d\n", i , j);
    
    /*B*/
    i = 5;
    j = (i -= 2) + 1;
    printf("%d %d\n", i , j);

    /*C*/
    i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d\n", i , j);

    /*D*/
    i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d\n", i , j);

    /************************************/
    printf("\nEx 11.\n");
    /*A*/
    i = 1;
    printf("%d \n", i++ - 1 );
    printf("%d \n", i);

    /*B*/
    i = 10; j = 5;
    printf("%d \n", i++ - ++j);
    printf("%d %d\n", i , j);
   
   /*C*/
    i = 7; j = 8; 
    printf("%d \n", i++ - --j );
    printf("%d %d\n", i , j);
    
    /*D*/
    i = 3; j = 4; k = 5;
    printf("%d \n", i++ - j++ + --k);
    printf("%d %d %d \n", i , j, k);

    /************************************/
    printf("\nEx 12.\n");
    /*A*/
    i = 5;
    j = ++i * 3 - 2;
    printf("%d %d\n", i , j);
   
    /*B*/
    i = 5;
    j = 3 - 2 * i++;
    printf("%d %d\n", i , j);

    /*C*/
    i = 7;
    j = 3 * i-- + 2;
    printf("%d %d\n", i , j);
    
    /*D*/
    i = 7;
    j = 3 + --i * 2;
    printf("%d %d\n", i , j);
    
    
    /************************************/
    printf("\nEx 14.\n");
    printf("%f \n", 20 / 2 % 7 / 8.0);


    /************************************/
    printf("\nEx 15.\n");
    /*A*/
    i = 1, j = 2;
    i += j;
    printf("%d %d\n", i , j);

    /*B*/
    i = 1, j = 2;
    i--;
    printf("%d %d\n", i , j);

    /*C*/
    i = 1, j = 2;
    i * j / i;
    printf("%d %d\n", i , j);

    /*D*/
    i = 1, j = 2;
    i % ++j;
    printf("%d %d\n", i , j);

   return 0;
}
