#include <iostream>
using namespace std;

int main() {
    int time = 20;
    string result = (time <18)? "Good day.": "Good evening.";
    if (time >18) {
        cout << "Good day. "<<endl;
    } else {
        cout << "Good evening. "<<endl;
    }
}