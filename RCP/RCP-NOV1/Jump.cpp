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
    cin >> n;
    set<int> s1;
    REP(i, 0, n){
        int val;
        cin >> val;
        s1.insert(val);
    }

    int m = (*s1.bg)/3;
    REP(i,m,334)REP(j,m+1,334)REP(k,m+1,334){
        set<int> s2;
        s2.insert(i+j+k);
        s2.insert(i+i+k);
        s2.insert(i+j+i);
        s2.insert(i+i+i);
        s2.insert(j+j+j);
        s2.insert(j+j+k);
        s2.insert(i+j+j);
        s2.insert(k+k+k);
        s2.insert(i+k+k);
        s2.insert(k+j+k);
        
        set<int> inter;
        set_intersection(all(s1), all(s2), inserter(inter, inter.begin()));

        if (inter.sz == s1.sz){
            cout << i << " " << j << " " << k << endl;
            return; 
        }
    }

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}