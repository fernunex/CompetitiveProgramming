//Problem: 
// Name: 
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007
#define REP(i,a,n) for(int i=a;i<n;i++)

#define vll vector<ll>
#define vec vector
#define vi vector<int>
#define pll pair<long long, long long>
#define pii pair<int, int>
#define sll set<ll>
#define fi first
#define sc second
#define bg begin()
#define ed end()
#define rb rbegin()
#define rd rend()
#define sz size()
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) x.rbegin(), x.rend()

// vec_min, vec_max, vec_sum in O(n)
template<class T> T vec_min(vector<T> &v) {assert(!v.empty()); T ans = v[0]; for (auto &x: v) ans = min(ans, x); return ans;}
template<class T> T vec_max(vector<T> &v) {assert(!v.empty()); T ans = v[0]; for (auto &x: v) ans = max(ans, x); return ans;}
template<class T> T vec_sum(vector<T> &v) {assert(!v.empty()); T ans = T(0); for (auto &x: v) ans += x; return ans;}


void solve(){
    int n;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string cad;
    cin >> cad;
    while(cad[0] != '.'){
        int len = 1, i = 1, j = 0;

        while(i < cad.size()){

            if(cad[i] != cad[j%len]){
                // cout  << i << " " << j%len << cad[i] << "--" << cad[j&len] << "\n";
                j = 0;
                len = i + 1;
            } else{
                j++;
            }
            i++;
        }

        if (j % len) cout << "1\n";
        // else cout << cad.size()/len << "len: " << len << "\n";
        else cout << cad.size()/len << "\n";


        cin >> cad;
    }
    return 0;
}