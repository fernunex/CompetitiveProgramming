//https://open.kattis.com/problems/shuffling

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    string choice;
    cin >> n >> choice;

    vector<int> cards(n), cardstemp(n);
    for(int i = 0; i < n; i++) cards[i] = i;

    int res = 0;
    if(choice == "out"){
        while(true){
            int half1=0,half2 = (n+1)/2, index=0;
            for(int i = 0; i < n/2; i++){
                cardstemp[index] = cards[half1+i];
                cardstemp[index+1] = cards[half2+i]; 
                index += 2;
            }
            if(n&1) cardstemp[n-1] = cards[(n)/2];
            res++;

            bool flag = true;
            for(int i = 0; i < n; i++) {
                if(cardstemp[i] != i) flag = false;
            }
            if(flag) break;
            else cards = cardstemp;
        }
    } else{
        while(true){
            int half2=0,half1 = n/2, index=0;
            for(int i = 0; i < n/2; i++){
                cardstemp[index] = cards[half1+i];
                cardstemp[index+1] = cards[half2+i]; 
                index += 2;
            }
            if(n&1) cardstemp[n-1] = cards[n-1];
            res++;

            bool flag = true;
            for(int i = 0; i < n; i++) {
                if(cardstemp[i] != i) flag = false;
            }
            if(flag) break;
            else cards = cardstemp;
        }
    }
    cout << res << '\n';

    return 0;
}