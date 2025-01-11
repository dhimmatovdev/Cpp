#include <iostream>
using namespace std;

int main() {
    string food = "Pizza"; // string
    string &meal = food; // Reference to food
    cout << food << "\n"; // Outputs Pizza  
    cout << meal << "\n"; // Outputs Pizza
}