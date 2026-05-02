// https://atcoder.jp/contests/abc054/tasks/abc054_c

#include<bits/stdc++.h>
using namespace std;

int N, m, tot=0;
vector<int> ad[10];
vector<bool> visited(10,false);

void dfs(int n, int d){
    if(d==N) {tot++; return;}
    visited[n] = true;

    for(auto v: ad[n]){
        if(!visited[v]) dfs(v, d+1);
    }
    visited[n] = false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> N >> m;


    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        ad[a].push_back(b);
        ad[b].push_back(a);
    }
    dfs(1,1);

    cout << tot << '\n';

    return 0;
}