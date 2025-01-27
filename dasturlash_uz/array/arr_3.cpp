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
    int sum1=0, result1=0;
    for (int i=0; i<size; i++) {
        sum++;
        result1+=num[i];
        sum1=result1/sum;
    }
    cout <<sum1<<endl;
}