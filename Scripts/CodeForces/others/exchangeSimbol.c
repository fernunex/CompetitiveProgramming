#include <bits/stdc++.h>
using namespace std;

// Utilizando Backtracking
void exchange(int *a, int n){
    if(n == 0){
        return;
    }
    //std::cout << n << std::endl;
    exchange(a+1, n-1);
    a[0] *= (-1);
}

int main() {
	int arr[] = {1,2,-8,4,5};
	exchange(arr, 5);
	for (int i = 0; i < 5; i++){
    	    cout << arr[i] << std::endl;
	}

    return 0;
}
