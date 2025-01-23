#include <string>
#include <iostream>
using namespace std;

void modifyString(string &str) {
    str+="World";
}
int main() {
    string greeting = "Hello ";
    modifyString(greeting);
    cout<<greeting;
    return 0;
}