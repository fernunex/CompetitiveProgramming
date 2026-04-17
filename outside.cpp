#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. Read Input
    int N, A;
    if (!(cin >> N >> A)) return 0;
    
    vector<int> x(N);
    for (int i = 0; i < N; ++i) {
        cin >> x[i];
    }

    // 2. Initialize DP Table
    // dp[j][s] = Number of ways to choose exactly 'j' cards with total sum 's'
    // Max cards = 50, Max possible sum = 50 * 50 = 2500
    // We use long long because the number of ways can exceed 2^31 - 1
    long long dp[51][2501] = {0};

    // Base case: 0 ways to pick 0 cards with sum 0 is 1 (the empty set)
    dp[0][0] = 1;

    // 3. Process each card
    for (int i = 0; i < N; ++i) {
        int val = x[i];

        // Iterate backwards for 'j' (count of cards) and 's' (current sum)
        // We go backwards to ensure we don't use the same card twice for the same state
        for (int j = N; j >= 1; --j) {
            for (int s = 2500; s >= val; --s) {
                // Transition: Add the ways to reach the previous state (j-1, s-val)
                dp[j][s] += dp[j - 1][s - val];
            }
        }
    }

    // 4. Calculate the Answer
    // We need sum(dp[j][s]) where s/j == A, which means s == j * A
    long long ans = 0;
    for (int j = 1; j <= N; ++j) {
        // Only valid if the target sum (j*A) is within bounds
        if (j * A <= 2500) {
            ans += dp[j][j * A];
        }
    }


    for(int j = 0; j < 50; j++){
            cout << j << " ";
    }
    cout << endl;

    for(int i = 0; i <= N; i++){
        for(int j = 0; j < 50; j++){
            cout << dp[i][j] << " ";
            if (j/10) cout << " ";
        }
        cout << endl;
    }

    // cout << ans << endl;

    return 0;
}