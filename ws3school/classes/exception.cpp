#include <iostream>
using namespace std;

int main() {
    try {
        int age = 15;
    if(age>=18) {
        cout << "siz yetarli yoshdasiz";
    }else{
        throw 505;
    }
    }
    catch(int myNum) {
    cout << "Kirish uchun yetarli yoshda emassiz\n";
    cout << "Error "<< myNum;
}
}
