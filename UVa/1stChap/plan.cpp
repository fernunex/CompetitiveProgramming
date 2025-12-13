//11559 - Event Planning
// Fer Nuñez

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, b, h, w;
    
    while(cin >> n >> b >> h >> w){
        int res = -1;
        for(int i = 0; i < h; i++){
            int cxp, beds=0;
            cin >> cxp;
            for(int j=0; j < w; j++){
                int bw;
                cin >> bw;
                beds = max(beds, bw);
            }
            if(cxp*n <= b && beds >= n) res = res==-1 ? cxp*n: min(res,cxp*n);
        }

        if(res == -1) cout << "stay home\n";
        else cout << res << endl;
    }
}

int main(){
    solve();
    return 0;
}