/*
Misol Sharti
n, array[] berilgan.

Shu massiv oxiriga n ni jo'ylashtiring va massivni konsolga chiqaring.


    */
#include <iostream>
using namespace std;

int main() {
    int arr[]={6, 25, 91, 23, 72, 9, 18, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n;
    cin>>n;
    arr[size]=n;
    for (int i =0; i<size+1; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

