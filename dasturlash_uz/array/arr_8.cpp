#include <iostream>
using namespace std;

int main() {
    int arr[]={1,3,7,8,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    int NewArr[size];
    for (int i = 0; i<size; i++) {
        cout<<arr[i];
    }
    //cout<<NewArr<<endl;
    return 0;
}