#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f1(double x, double y) {
    return ((2*tan(x+(M_PI/6)))/((1.0/3)+pow(cos(y+x*x),2)))+log(x*x+2)/log(2);
}
int main() {
    double x, y;
    cin>>x>>y;
    double result = f1(x,y);
    cout<<setprecision(3)<<result<<endl;
    return 0;
}