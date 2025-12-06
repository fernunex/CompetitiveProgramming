#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
    ll n, res = LONG_LONG_MIN;
    cin >> n;
    vector<ll> pos, neg;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        if (val >= 0) pos.push_back(val);
        else neg.push_back(val);
    }
    sort(pos.rbegin(), pos.rend());
    sort(neg.rbegin(), neg.rend());

    if(pos.size() == 0) res = neg[0]*neg[1]*neg[2]*neg[3]*neg[4];

    if(pos.size() >= 1 && neg.size() >= 4) res = max(neg[neg.size()-1]*neg[neg.size()-2]
    *neg[neg.size()-3]*neg[neg.size()-4]* pos[0], res);

    if(pos.size() >= 3 && neg.size() >= 2) res = max(neg[neg.size()-1]*neg[neg.size()-2]* 
    pos[0]* pos[1]* pos[2], res);

    if(pos.size() >= 5) res = max(res, pos[0]* pos[1]* pos[2]* pos[3]* pos[4]);

    if(neg.size() == 1) res = max(res, pos[pos.size()-1]*pos[pos.size()-2]*pos[pos.size()-3]*
    pos[pos.size()-4]*neg[0]);

    if (neg.size() == 3 && pos.size() == 2) res = max(
        res, neg[0]*neg[1]*neg[2]*pos[0]*pos[1]
    );

    cout << res << endl;


}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin >> tt;
    while(tt--) solve();
    return 0;
}