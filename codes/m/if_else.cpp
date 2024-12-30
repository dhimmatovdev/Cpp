#include <iostream>
using namespace std;

int main() {
    int a = 10, b=14, c=11;
    if (a==b&&b==c) {
        cout << "equilateral triangle"<<endl;
    } else if (a==b||b==c||c==a) {
        cout << "isosceles triangle"<<endl;
    } else {
        cout << "scalene triangle"<<endl;
    }
    return 0;
}