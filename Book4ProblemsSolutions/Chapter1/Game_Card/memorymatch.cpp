// https://open.kattis.com/problems/memorymatch

#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    map<string, vector<int>> cards;
    int took=0, pair=0, single=0;
    for (int i = 0; i < k; i++)
    {
        int idx1, idx2;
        string card1, card2;
        cin >> idx1 >> idx2 >> card1 >> card2;
        if(card1 == card2) {cards[card1] = {idx1, idx2, -1};took++; continue;}


        if(cards.count(card1)){
            if(cards[card1][0] != idx1 && cards[card1].size() == 1) cards[card1].push_back(idx1);
        } else{
            cards[card1] = {idx1};
        }


        if(cards.count(card2)){
            if(cards[card2][0] != idx2 && cards[card2].size() == 1) cards[card2].push_back(idx2);
        } else{
            cards[card2] = {idx2};
        }
    }

    for(auto k : cards){
        if(k.second.size() == 2) pair++;
        else if(k.second.size()==1) single++; 
    }

    cout << pair + (n-pair*2-took*2-single == single? single :0) + 
        (n-pair*2-took*2-single == 2 && single == 0? 1:0)  << '\n';
    


    return 0;
}