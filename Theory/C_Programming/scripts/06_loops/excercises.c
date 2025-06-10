#include <stdio.h>

int main() {
	// Ejercicio 1
    /*
    int i = 1;
    while (i <= 128) {
    	printf("%d ", i);
    	i *= 2;
    }
    */
    
    // Ejercicio 2
    /*
    int i = 9384;
    do {
    	printf("%d ", i);
        i /= 10;
    } while (i > 0);
	*/
    
    // Ejercicio 3
    /*
 	int i, j;
    for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    	printf("%d ", i);
    */

	// Ejercicio 6
//    for (int i = 1; i <= 128; i *= 2) printf("%d ", i);


    // Ejercicio 7
//	for (int i = 9384; i > 0; i /= 10) printf("%d ", i); 

	// Ejercicio 8
//    for (int i = 10; i >= 1; i /= 2) printf("%d ", i++);

	// Ejercicio 9
    /*
    int i = 10;
    while (i >= 1){
    	printf("%d ", i++);
        i /= 2;
    }
    */

	// Ejercicio 11
    /*
    int sum = 0;
    for (int i = 0; i < 10; i++) {
    	if (i % 2)
        	continue;
        sum += i;
    }
    printf("%d\n", sum);
	*/
    
    // Ejercicio 12
    /*
    int n = 24, d;
    for (d = 2; d * d <= n; d++)
    	if ( n % d == 0) break;
    
    if (d*d <= n) printf("NO ES PRIMO");
	*/
    
    // Ejercicio 13
    int n, m = 10;
    //for (n = 0; m > 0; n++)
    	//m /= 2;
    for (n = 0; m > 0; n++, m /= 2) ;
     
     printf("%d %d", m, n);
        
  return 0;
}