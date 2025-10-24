//Problem: https://atcoder.jp/contests/abc380/tasks/abc380_c
// Name: C - Move Segment
// Author: Fer Nunez

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define MOD_10e9_7 1000000007 // its prime
#define REP(i,a,n) for(int i=a;i<n;i++)

#define vec vector
#define vi vector<int>
#define pll pair<long long, long long>
#define pii pair<int, int>
#define fi first
#define sc second
#define all(v) (v).begin(), (v).end()
#define bg begin()
#define ed end()
#define rb rbegin()
#define rd rend()
#define lb lower_bound
#define ub upper_bound
#define pb push_back

void solve(){
    int n, k;
    string s;
    cin >> n >> k >> s;

    int inIni = -1, ones = 0, zeros = 0, kcounter=0, i = 0;
    bool flag = false;
    while (i < s.size())
    {
        if(s[i] == '1' && !flag){
            kcounter++;
            flag = true;
        }
        if (s[i] == '0') flag = false;
        if (kcounter == k-1 && inIni == -1) inIni = i;
        if ((kcounter == k-1 || kcounter==k) && s[i] == '1') ones++;
        if (kcounter == k-1 && s[i] == '0') zeros++;

        if (kcounter == k && !flag) break;
        i++;    
    }
    // cout << "inicio" << inIni << endl;
    // cout << "ones" << ones << endl;
    // cout << "zeros" << zeros << endl;
    
    REP(i, inIni, inIni+ones) s[i] = '1';
    REP(i, inIni+ones, inIni+ones+zeros) s[i] = '0';
    cout << s << endl;

}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    solve();
    return 0;
}