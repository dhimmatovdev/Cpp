#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long digitProduct(long long num) {
    long long prod = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0) return 0; 
        prod = (prod * digit) % MOD;
        num /= 10;
    }
    return prod;
}

int main() {
    int N;
    cin >> N; 

    long long sum = 0;
    long long start = 1;
    for (int i = 1; i < N; i++) {
        start *= 10; 
    }
    long long end = start * 10 - 1; 
    for (long long num = start; num <= end; num++) {
        sum = (sum + digitProduct(num)) % MOD;
    }

    cout << sum << endl;
    return 0;
}
