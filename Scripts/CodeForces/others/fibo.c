#include <bits/stdc++.h>
using namespace std;

int fiboRec(int n){
    if(n<=1){
        return n;
    }
    //std::cout << n << std::endl;
    return fiboRec(n - 2) + fiboRec(n - 1);
}

int main() {
    int res = fiboRec(6);
    cout << res << std::endl;
    return 0;
}
