#include <vector>
#include <iostream>
#include <algorithm>

using namespace std; 

int main() {
    vector<string> cars = {"BMW", "Audi", "Mercedes", "Toyota", "Ford", "Chevrolet", "Hyundai", "Kia", "Nissan", "Honda"};
    sort(cars.begin(), cars.end());
    for (string car : cars) {
        cout << car << " ";
    }
    cout << endl;
}