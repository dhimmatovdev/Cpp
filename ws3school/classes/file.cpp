#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //Create and open a text file 
    ofstream MyFile("hello.txt");

    //Write to the file 
    MyFile << "Assalomu alaykum bu yozuvlar fileni ichiga ko'gan bo'lishi kerak!";
    //Close the file 
    MyFile.close();
}