#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, z;
    cin>>x>>y;
    double term1 = log(abs(pow(x + y, 2) + sqrt(abs(y)) + 2 - (x - (x * y) / (pow(x, 2) / 2 - 5))));
    double term2 = pow(cos(x + y), 2) / pow((x + y), 1.0 / 3.0);
    z = term1 + term2;
    cout<<z<<endl;
    return 0;
}