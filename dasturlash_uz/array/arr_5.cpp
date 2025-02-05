/*
Misol Sharti
n, array[] berilgan.

Shu massivda n-chi index dagi elementini konsolga chiqaring.

Agar index xato bo'lsa  0 chiqaring.

*/
#include <iostream>
using namespace std;

int main() {
    int arr[]={12, 21, 36, 71, 24, 85, 12, 30, 25};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n;
    cin>>n;
    if (n<0||n>=size) {
        cout<<0<<endl;
    } else {
        cout<<arr[n]<<endl;
    }
}
