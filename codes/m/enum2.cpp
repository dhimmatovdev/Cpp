#include <iostream>
#include <string>
using namespace std;

enum Level {
    LOW=1,
    MEDIUM,
    HIGH
};

int main() {
    enum Level myVar=MEDIUM;
    switch (myVar) {
        case 1:
            cout<<"Low level\n";
            break;
        case 2:
            cout<<"Medium level\n";
            break;
        case 3:
            cout<<"High level\n";
            break;
    }
    return 0;
}