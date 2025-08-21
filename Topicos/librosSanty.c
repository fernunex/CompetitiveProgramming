#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h> // For INT_MAX, LLONG_MAX, etc.

int busBin(long long a[], int n, long x){
    int izq=0, der=n-1, mitad;
    while(izq <= der){
        mitad = (der+izq)/2;

        if(a[mitad] == x){
            return mitad;
        } else if (a[mitad] > x){
            der = mitad - 1;
        } else {
            izq = mitad + 1;
        }
    }
    return -1;
}

void solve(){
    int n,q;
    long long dato;
    long long a[1000001];
    int i, pos;
    scanf("%d %d", &n, &q);
    for (i = 0; i < n; i++){
        scanf("%lld", &a[i]);
    }
    
    // printf("N:%d Q:%d \n", n, q);
    for (i = 0; i < q; i++){
        scanf("%lld", &dato);
        printf("%d ", busBin(a, n, dato));
    }
    printf("\n");
}

int main() {
    int test_cases;
    solve();
    return 0;
}
