#include <iostream>
using namespace std;

int main() {
    int arr[] = {3,8,6,7,9,2};
    int n = sizeof(arr) / sizeof(arr[0]);   

   
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int sum=0;
    for(int i=0; i<n; i+=2){
           sum+=arr[i];
          
        }   

    cout <<sum << endl;
    return 0;
}
