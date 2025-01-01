#include <iostream>
using namespace std;

int main() {
    int number=12345;
    int teskariraqam=0;
    while (number) {
        teskariraqam=teskariraqam*10+number%10;
        number/=10; 
    }

    cout << "Teskari raqam: " << teskariraqam << endl;
    
    return 0;
}