#include <iostream>
using namespace std;

int main() {
    int n=10;
    double sum = 0;
    for (double i =1; i<=n; i++) {
        sum+=1/i;
    }
    cout<<sum<<endl;
}