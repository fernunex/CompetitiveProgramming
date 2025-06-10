// Author: Fer
// These are the exercises of the chapter 5

#include <stdio.h>

int main() {
  int i, j, k;
  
  // Problem 1
  // A)
  /*
  i = 2; j = 3;
  printf("%d\n", k = i*j == 6);
  
  // B)
  i = 5; j = 10; k = 1;
  printf("%d\n", k > i < j);
  
  // C)
  i = 3; j = 2; k = 1;
  printf("%d\n", i < j == j < k);
  
  // D)
  i = 3; j = 4;  k = 5;
  printf("%d\n", i % j + i < k);
  */
  
  
  // Problem 2
  // A)
  /*
  i = 10; j = 5;
  printf("%d\n", !i < j);
  
  // B)
  i = 2; j = 1;
  printf("%d\n", !!i + !j);
  
  // C)
  i = 5; j = 0; k = -5;
  printf("%d\n", i && j || k);
  
  // D)
  i = 1; j = 2;  k = 3;
  printf("%d\n", i < j || k);
  */
  
    // Problem 3
  // A)
  /*
  i = 3; j = 4; k = 5;
  printf("%d\n", i < j || ++j < k);
  printf("%d %d %d\n", i, j, k);
  
  // B)
  i = 7; j = 8; k = 9;
  printf("%d\n", i - 7 && j++ < k);
  printf("%d %d %d\n", i, j, k);
  
  // C)
  i = 7; j = 8; k = 9;
  printf("%d\n", (i = j) || (j = k));
  printf("%d %d %d\n", i, j, k);
  
  // D)
  i = 1; j = 1; k = 1;
  printf("%d\n", ++i || ++j && ++k);
  printf("%d %d %d\n", i, j, k);
  */
  
  // Problem 4
  /*
  i = 10;
  j = 9;
  //k = i <= j ? (i == j) - 1 : 1;
  k = (i > j) - (i < j);
  printf("%d\n", k);
  */
  
  // Problem 5
  /*
  if (0 >= 1 <= 10)
  	printf("n is between 1 and 10\n");
  */
   
  // Problem 7
  /*
  i = -17; 
  printf("%d\n", i >= 0 ? i : -i);
  */
  
  // Problem 8
  int age;
  age = 20;
  printf("%d\n", age >= 13? age <= 19 : 0);
    
  
  return 0;
}
