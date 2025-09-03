#include <bits/stdc++.h>

using namespace std;


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
    int a[1000001];
    // unordered_map<int, int> ma; 
    int i, pos;
    scanf("%d %d", &n, &q);
    for (i = 0; i < n; i++){
        scanf("%lld", &dato);
        a[dato] = i;
    }

    for (i = 0; i < q; i++){
        scanf("%lld", &dato);
        printf("%d ", a[dato]);
    }
    printf("\n");
}

int main() {
    int test_cases;
    solve();
    return 0;
}
