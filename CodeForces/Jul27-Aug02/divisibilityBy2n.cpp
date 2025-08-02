//Problem: https://codeforces.com/contest/1744/problem/D
// Name: D. Divisibility by 2^n
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n, powersof2=0, val, count;
    cin >> n;
    priority_queue<int> maxHeap;
    for (int i=0; i < n; i++){
        cin >> val;
        count = 0;
        while (val%2==0) {count++; val /= 2;}
        powersof2 += count;

        int ip=i+1;
        count=0;
        while (ip%2==0){count++; ip /= 2;}
        if (count != 0) maxHeap.push(count);
    }

    int res = 0;
    while (powersof2 < n && !maxHeap.empty()){
        res++;
        powersof2 += maxHeap.top();
        maxHeap.pop();
    }
    if (powersof2 >= n){
        cout << res << endl;
    } else {
        cout << "-1\n";
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}