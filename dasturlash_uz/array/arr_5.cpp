#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[]={6, 25, 91, 23, 72, 9, 18, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    if (n>=0||n<=size) {
        cout<<arr[n];
    }else{
        cout<<"Noto'g'ri indeks";
    }
    
}