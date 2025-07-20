    #include <bits/stdc++.h>
    #define endl '\n'
    #define F first
    #define S second
    using namespace std;
    #define ll long long
    #define pb push_back
    #define mod 1000000007
    #define int long long
    #define all(x)      x.begin(),x.end()
    #define allr(x)     x.rbegin(),x.rend()
    #define CheckBit(x,k)   (x & (1LL << k))
    #define SetBit(x,k)     (x |= (1LL << k))
    #define ClearBit(x,k)   (x &= ~(1LL << k))
    #define toggleBit(x,k)  (x ^= (1LL << k))
    #define LSB(mask)       __builtin_ctzll(mask)
    #define MSB(mask)       63-__builtin_clzll(mask) 
    #define print(x)    cout << #x << " : " << x << endl
    #define error1(x)   cerr << #x << " = " << (x) <<endl
    #define coutall(v)  for(auto &it: v) cout<<it<<' '; cout<<endl
    #define Abid_52     ios::sync_with_stdio(false);cin.tie(0),cin.tie(0)
    #define error2(a,b) cerr<<"( "<<#a<<" , "<<#b<<" ) = ( "<<(a)<<" , "<<(b)<<" )\n"
    #define UNIQUE(x)   sort(all(x)), x.erase(unique(all(x)), x.end()), x.shrink_to_fit()
    template <typename T, typename U> T ceil(T x, U y) {return (x > 0 ? (x + y - 1) / y : x / y);}
    template <typename T, typename U> T floor(T x, U y) {return (x > 0 ? x / y : (x - y + 1) / y);}
     
    const int N = 2e5 + 10;
     
    void solve()
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n), pre(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        for(int i = 0; i < n; i++)
        {
            pre[i] = v[i];
            if(i != 0)
            {
                pre[i] += pre[i - 1];
            }
        }
        ll ans = 0;
        for(int i = 0; i < n; i++)
        {
            int l = 0, r = m, mid, tempAns = 0;
            while(l <= r)
            {
                mid = (l + r) / 2;
                ll tot = pre[i] + ((i + 1) * mid);
                if(tot <= m)
                {
                    l = mid + 1;
                    tempAns = mid + 1;
                }
                else{
                    r = mid - 1;
                }
            }
            ans += tempAns;
        }
     
        cout << ans << endl;
     
    }
     
    int32_t main()
    {
        Abid_52;
        int t = 1;
        cin >> t;
        for (int tc = 1; tc <= t; ++tc)
        {
            // cout << "Case " << tc << ": ";
            solve();
        }
    }