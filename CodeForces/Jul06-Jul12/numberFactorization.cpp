//Problem: 
// Name: 

#include <bits/stdc++.h>

using namespace std;

map<long long, int> primeFactorize(long long n) {
    map<long long, int> factors;
    
    // Try dividing by 2 first
    while (n % 2 == 0) {
        factors[2]++;
        n /= 2;
    }

    // Try odd numbers from 3 up to sqrt(n)
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors[i]++;
            n /= i;
        }
    }

    // If n is still > 1, then it is prime
    if (n > 1) {
        factors[n]++;
    }

    return factors;
}


void solve(){
    int n;

    cin >> n;

    auto factos = primeFactorize(n);

    vector<int> primos, powers;

    for (auto [p, exp] : factos) {
        primos.push_back(p);
        powers.push_back(exp);
    }

    long long sum = 0;
    int count = 0;
    while (count != primos.size())
    {
        int minIndex = min_element(powers.begin(), powers.end()) - powers.begin();
        int minPow = powers[minIndex];
        // cout << "Min power:" << minPow << endl;

        long long mul = 1;

        for (int i = 0; i < primos.size(); i++){
            if(primos[i] != 0){
                mul *= primos[i];
                powers[i] = powers[i] - minPow;
                
                if (powers[i] == 0){
                    primos[i] = 0;
                    powers[i] = INT32_MAX;
                    count++;
                }
            }
        }
        powers[minIndex] = INT32_MAX;

        sum += mul*minPow;
    }
    cout << sum << endl;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int tt;
    cin>>tt;
    while(tt--) solve();
    return 0;
}