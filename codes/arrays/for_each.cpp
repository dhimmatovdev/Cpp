#include <iostream>
using namespace std;

int main() {
    int myarrays[5]={12,23,34,45,56};
    int numbers[4]={1,2,3,4};
    cout<<sizeof(numbers)<<endl;
    for (int i:myarrays) {
        cout<<i<<endl;
    }
    return 0;
}