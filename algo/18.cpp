#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double compute_f2(double x, double y) {
    double numerator = (1.0 / (x + (2.0 / (x + (5.0 / pow(x, 3)))))) + exp(pow(x, 2) + 3 * x);
    double denominator = atan(x + y) + pow(fabs(5 + x), 2);
    double cos_part = pow(cos(pow(y, 2) + (pow(x, 2) / 2)), 2);
    
    return (numerator / denominator) - cos_part;
}

int main() {
    double x, y;
    cin >> x >> y;
    double result = compute_f2(x, y);
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}
