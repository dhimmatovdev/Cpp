/*
Misol Sharti
n, array[] berilgan.

Shu massiv boshiga n ni jo'ylashtiring va konsolga chiqaring
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[]={6, 25, 91, 23, 72, 9, 18, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    //Yangi massivni yaratish
    int newSize=size+1;
    int newArr[newSize];
    //Yangi elementni boshiga qo'shish
    newArr[0]=n;
    // Eski massivni yangi massivga nusxalash
    for (int i = 0; i<size; i++) {
        newArr[i]=arr[i];
    }
    // Yangi elementni qo'shish
    newArr[0]=n;
    // Ynagi massivni chiqarish
    for (int i = 0; i<newSize; i++) {
        cout<<newArr[i]<<" ";
    }
}