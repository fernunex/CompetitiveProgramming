// https://usaco.org/index.php?page=viewproblem2&cpid=1491

#include<bits/stdc++.h>
using namespace std;

int diff(int r, int c, int n, vector<string> &v){
    int c2 = n - c;
    int r2 = n - r;
    vector<pair<int, int>> pts = {{r,c}, {r,c2}, {r2, c}, {r2, c2}};
    int ga=0, po=0;
    for(auto point: pts){
        if(v[point.first][point.second] == '.') po++;
        else ga++;
    }
    return min(ga, po);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, u;
    cin >> n >> u;
    vector<string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    long long tot=0;
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n/2; j++){
            tot += diff(i,j, n-1, v);
        }
    }

    cout << tot << '\n';
    for (int i = 0; i < u; i++)
    {
        int r,c;
        cin >> r >> c;
        r--;
        c--;
        int curr = diff(r,c, n-1, v);
        v[r][c] = v[r][c] == '.'? '#': '.';
        int now = diff(r,c, n-1, v);
        tot -= curr;
        tot += now;
        cout << tot << '\n';
    }
    

    return 0;
}