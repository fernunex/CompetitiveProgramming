#include <bits/stdc++.h>
using namespace std;


int totalArray(int a[], int size) // o int *a
{
    int totalSum = 0;
    for(int i = 0; i < size; i++){
        totalSum += a[i];
    }

    return totalSum;
}

int main(int argc, char const *argv[])
{
    int numbers[] = {5, 8, 10, 15};
    int size = sizeof(numbers)/sizeof(int);

    std::cout << totalArray(numbers, size) << std::endl;
    return 0;
}
