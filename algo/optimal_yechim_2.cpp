#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1000000007;
int N;

long long dpApproach(int N) {
    vector<long long> dp(1000, 0); 
    for (int d = 1; d <= 9; d++) dp[d] = 1; 

    for (int i = 2; i <= N; i++) {
        vector<long long> new_dp(1000, 0);
        for (int prevProd = 1; prevProd < 1000; prevProd++) {
            if (dp[prevProd] == 0) continue; 
            for (int d = 1; d <= 9; d++) {
                int newProd = (prevProd * d) % 1000;
                new_dp[newProd] = (new_dp[newProd] + dp[prevProd]) % MOD;
            }
        }
        dp = new_dp;
    }

    long long sum = 0;
    for (int p = 1; p < 1000; p++) {
        sum = (sum + p * dp[p]) % MOD;
    }
    return sum;
}

int main() {
    cin >> N;
    cout << dpApproach(N) << endl;
    return 0;
}
