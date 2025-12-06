#include<bits/stdc++.h>

using namespace std;


void solve(){
    int n, ar, ap, as, br=0, bp=0, bs=0;
    string bob;
    cin >> n  >> ar >> ap >> as >> bob;

    for(int i = 0; i < n; i++){
        if(bob[i] == 'R') br++;
        if(bob[i] == 'P') bp++;
        if(bob[i] == 'S') bs++;
    }

    // cout << br << "bob br--ap:" << ap << endl;

    int tot = min(ar,bs) + min(ap,br) + min(as,bp);

    // cout << tot << " .. " << (n+1)/2 << endl;

    if(tot >= (n+1)/2){
        vector<char> res(n, 'x');
        for(int i = 0; i < n; i++){
            if(bob[i] == 'R' && ap){
                ap--;
                res[i] = 'P';
            } else if(bob[i] == 'P' && as){
                as--;
                res[i] = 'S';
            } else if(bob[i] == 'S' && ar){
                ar--;
                res[i] = 'R';
            }
        }

        int i = 0;
        while(ar+as+ap){
            if(res[i] == 'x'){
                if(ar){
                    ar--;
                    res[i] = 'R';
                } else if(as){
                    as--;
                    res[i] = 'S';
                } else if(ap){
                    ap--;
                    res[i] = 'P';
                }
            }
            i++;
        }

        string r = "";
        for(int i = 0; i < n; i++){
            r.push_back(res[i]);
        }
        cout << "YES\n";
        cout << r << endl;
    }else{
        cout << "NO\n";
    }


}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}