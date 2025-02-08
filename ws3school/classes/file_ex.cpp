#include <fstream>
#include <iostream>
using namespace std;
int main() {
    string myText;
    ifstream MyReadFile("file.txt");
    while (getline(MyReadFile, myText)) {
        cout << myText;
    }
    MyReadFile.close();
    return 0;
}