#include<bits/stdc++.h>

using namespace std;

int main(){
    int frutas, clases; cin>>frutas>>clases;
    long long res=0;
    vector<int> school(clases,0);
    for(int i=0; i<frutas; i++){
        for(int j=0; j<clases; j++){
            int actual=0; cin>>actual;
            school[j] = max(school[j], actual);
        }
    }
    for(int i=0; i<clases; i++){
        res+= (long long) school[i];
    }
    cout<<res<<"\n";


}