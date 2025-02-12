#include <iostream>
using namespace std;

int main() {
    int arr[]={1,3,7,8,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i<size; i++) {
        int NewArr[]={arr[i]};
        cout<<NewArr[i];
    }
    cout<<endl;
    //cout<<NewArr<<endl;
    return 0;
}