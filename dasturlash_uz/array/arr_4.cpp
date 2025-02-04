/*
Misol Sharti
n, array[] berilgan. 

Shu massivda n soni bor yoki  yo'qligini aniqlang. n soni bo'lsa true, bo'lmasa false konsolga chiqaring.

*/
#include <iostream>
using namespace std;
int main() {
    int arr[]={6, 25, 91, 23, 72, 9, 18, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n;
    cin>>n;
    bool found = false;
    for(int i = 0; i<size; i++) {
        if(arr[i]==n) {
            found = true;
            break;
        }
    }
    cout<<found<<endl;
    
}