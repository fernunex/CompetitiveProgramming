#include<bits/stdc++.h>

using namespace std;

int main(){
    int ammount, addition; std::cin>>ammount>>addition;
    vector<pair<int, int>> numbers(ammount);
    int en;
    for(int i=0; i<ammount; i++) std::cin>>en, numbers[i]={en,i};
    sort(numbers.begin(), numbers.end());

    int minNum = numbers[0].first;
    int minPos = numbers[0].second;

    map<int,int> minPositions;
    map<int,int> maxPositions;
    int actual = -1;
    for(int i=0; i<ammount; i++){
        maxPositions[numbers[i].first] = numbers[i].second;
        if(actual != numbers[i].first){
            actual = numbers[i].first;
            minPositions[actual] = numbers[i].second;
        }
    }
    
    actual = -1;
    int inicPos = maxPositions[numbers[0].first];
    int finalPos = numbers[0].second;
    int minSaved = INT_MAX, minSaved2=0;
    pair<int, int> inicial = numbers[0];
    for(int i=0; i<ammount; i++){
        if(actual != numbers[i].first){
            actual = numbers[i].first;

            int resta = numbers[i].second - inicial.second;
            int res = 0;
            int otherRes=0;
            if(resta < 0){
                inicPos = minPositions[actual];
                resta = finalPos - inicPos;
                res = addition - resta + inicPos;
                
                otherRes = addition - (finalPos - minPositions[actual]) + actual;
                if(otherRes <= minSaved && res>=actual){
                    minSaved = otherRes;
                    minSaved2 = actual;
                }
                minSaved = min(otherRes, minSaved);

            }else{
                res = addition - resta  + inicPos;
                finalPos = maxPositions[actual];
                if(res <= minSaved && res>=actual){
                    minSaved = res;
                    minSaved2 = actual;
                }
            }
            cout<<res<<" "<<otherRes<<" ";

            if(res<actual)break;
        }
    }
    cout<<minSaved2<<"\n";
}