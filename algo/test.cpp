#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double x, y;
    cin >> x >> y;

    // Surat (numerator)
    double numerator = (1.0 / (x + (2.0 / (x + (5.0 / pow(x, 3)))))) + exp(pow(x, 2) + 3 * x);
    
    // Mahraj (denominator)
    double denominator = atan(x + y) + pow(abs(5 + x), 2);
    
    // Cos qismini hisoblash
    double cos_part = pow(cos(pow(y, 2) + (pow(x, 2) / 2)), 2);

    // Yakuniy hisoblash
    double f2 = (numerator / denominator) - cos_part;

    // Natijani chiqarish
    cout << fixed << setprecision(2) << f2 << endl;
    
    return 0;
}
