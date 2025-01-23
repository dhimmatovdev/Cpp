#include <iostream>
using namespace std;

//Massivni funksiya orqali chop etish
void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int numbers[]={1,2,3,4,5};
    int size = sizeof(numbers)/sizeof(numbers[0]); // Masiv olchamini hisoblash
    cout<<numbers[5]<<endl;
    printArray(numbers, size);
    return 0;
}