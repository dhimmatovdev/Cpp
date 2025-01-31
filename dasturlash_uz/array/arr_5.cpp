#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[]={6, 25, 91, 23, 72, 9, 18, 6};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}