// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2725

#include<bits/stdc++.h>
using namespace std;

int a, b;

void solve(){
    bool al[100001] = {false}, bo[100001] = {false};
    int p;
    for(int i = 0; i<a;i++) cin >> p, al[p]=true;
    for(int i = 0; i<b;i++) cin >> p, bo[p]=true;

    int r1=0, r2=0;
    for(int i = 1; i < 100001; i++){
        if(al[i] && !bo[i]) r1++;
        else if(!al[i] && bo[i]) r2++;
    }
    cout << min(r1,r2) << '\n';

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;
    while(a){
        solve();
        cin >> a >> b;
    }


    return 0;
}



// // https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2725

// #include<bits/stdc++.h>
// using namespace std;

// int a, b;

// void solve(){
//     set<int> al, bo;
//     int p;
//     for(int i = 0; i<a;i++) cin >> p, al.insert(p);
//     for(int i = 0; i<b;i++) cin >> p, bo.insert(p);

//     int r1=0, r2=0;
//     for(int v: al){
//         if(!bo.contains(v)) r1++;
//     }
//     for(int v: bo){
//         if(!al.contains(v)) r2++;
//     }
//     cout << min(r1,r2) << '\n';

// }


// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);

//     cin >> a >> b;
//     while(a){
//         solve();
//         cin >> a >> b;
//     }


//     return 0;
// }