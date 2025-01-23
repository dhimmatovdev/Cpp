/*
Misol Sharti
Massiv (array) berilgan.

O'sha massivdagi eng  kichik elementni toping va konsolga chiqaring.
*/
#include <iostream>
using namespace std;

int main() {
    int num[]={12, 21, 36, 71, 24, 85, 1, 0, 25};
    int size = sizeof(num)/sizeof(num[0]);
    int min=num[0];
    for (int i=0; i<size; i++) {
        if (num[i]<min && num[i]!=0) {
            min=num[i];
        }
    }
    cout << "Eng kichik element: "<<min<<endl;
}