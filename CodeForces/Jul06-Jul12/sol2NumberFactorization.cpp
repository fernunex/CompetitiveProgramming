#include<bits/stdc++.h>
#include<cmath>
using namespace std;

#define ll long long
#define ld long double
#define vi  vector<int>
#define vll vector<ll>

#define f1(j,n)    for(int i=j; i<n ; i++)
#define f2(j,n)    for(int i=j; i<=n ; i++)
#define rf1(j,n)   for(int i=j; i>n ; i--)
#define rf2(j,n)   for(int i=j; i>=n ; i--)

#define ai(arr,n)   f1(0,n) { cin >> arr[i]; }
#define ao(arr,n)   f1(0,n) { cout << arr[i] << " "; } cout << endl;

#define hy cout << "YES" << endl
#define hn cout << "NO" << endl

#define ho1(n)       cout << n
#define ho2(n,m)     cout << n << " " << m
#define ho3(n,m,p)   cout << n << " " << m << " " << p

void solve() {
    ll n;
    cin >> n;

    ll ans = 0;

    while(n != 1){

        ll p1 = 1,p2 = 1;

        for(ll i=2;i*i<=n;i++){
            if(n % i == 0){
                n /= i;
                p1 *= i;

                while(n % i == 0){
                    n /= i;
                    p2 *= i;
                }
            }
        }

        p1 *= n;
        n = p2;
        ans += p1;
    }

    ho1(ans) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}