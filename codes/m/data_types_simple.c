#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    float high;
    char gander;
    cout<< "Ismingizni kiriting: ";
    cin >> name;
    cout<<"Yoshingizni kiriting: ";
    cin >> age;
    cout<< "Bo'yingizni kiriting: ";
    cin >> high;
    cout<< "Jinsingizni kiriting: ";
    cin >> gander;

    cout<< "Ismingiz: "<<name<<endl;
    cout<<"Yoshingiz: "<<age<<endl;
    cout<< "Bo'yingiz: "<<high<<endl;
    cout<< "Jinsingiz: "<<gander<<endl;

    return 0;
}