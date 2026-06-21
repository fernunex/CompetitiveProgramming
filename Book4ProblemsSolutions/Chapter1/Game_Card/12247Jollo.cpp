// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3399

#include<bits/stdc++.h>
using namespace std;

int a, b, c, x, y;


int searchAgreater(vector<bool> &n, int treshold){
    for(int i = 1; i <= 52; i++){
        if(n[i]) continue;

        int cnt =0;
        for(int v : {a,b,c}){
            if(i > v) cnt++;
        }
        if(cnt >= treshold) return i;
    }
    return -1;
}

void solve(){
    vector<bool> num(53,false);
    num[a]=true; num[b]=true; num[c]=true; num[x]=true; num[y]=true;

    vector<int> counter(2,0);
    for(int v : {a,b,c}){
        if(x > v) counter[0]++;
        if(y > v) counter[1]++;
    }

    sort(counter.begin(), counter.end());

    int res = -1;
    if(counter[0] < 2 && counter[1] < 3) res = -1;
    else if(counter[0] == 3 && counter[1] == 3) res = searchAgreater(num,0);
    else if(counter[0] == 3 || counter[0] == 2) res = searchAgreater(num,2);
    else if(counter[0] < 2 && counter[1] == 3) res = searchAgreater(num,3);
    // else cout << "paquito\n";

    if (res != -1){
        cout << res << '\n';
    }else{
        cout << -1 << '\n';
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b >> c >> x >> y;
    while(a){
        solve();
        cin >> a >> b >> c >> x >> y;
    }


    return 0;
}