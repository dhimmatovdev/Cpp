/*
Misol Sharti
Massive (array) berilgan.

Massive elementlarini o'rtacha qiymatlarini hisoblang va konsolga chiqaring.
*/
#include <iostream>
using namespace std;

int main() {
    int num[]={6, 25, 91, 23, 72, 9, 18, 6};
    int size = sizeof(num)/sizeof(num[0]);
    int sum=0;
    int sum1, result1;
    for (int i=0; i<size; i++) {
        sum++;
        int sum1=sum+num[i];
        int result1=sum1/sum;
    }
    cout << result1 <<endl;
}