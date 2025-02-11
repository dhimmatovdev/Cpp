#include <iostream>
using namespace std;

const long long MOD = 1000000007;
int N;
long long sum = 0;

void generateNumbers(int pos, long long num, long long product) {
    if (pos == N) {
        sum = (sum + product) % MOD;
        return;
    }

    for (int digit = 1; digit <= 9; digit++) { 
        generateNumbers(pos + 1, num * 10 + digit, (product * digit) % MOD);
    }
}

int main() {
    cin >> N;
    sum = 0;

    generateNumbers(0, 0, 1); 

    cout << sum << endl;
    return 0;
}
