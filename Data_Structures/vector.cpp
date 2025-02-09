#include <vector>
#include <iostream>
#include <algorithm>

using namespace std; 

int main() {
    vector<string> cars = {"BMW", "Audi", "Mercedes", "Toyota", "Ford", "Chevrolet", "Hyundai", "Kia", "Nissan", "Honda"};
    sort(cars.begin(), cars.end());
    cars.push_back("BYD");
    for (string car : cars) {
        cout << car << " ";
    }
    cout << endl;
    cout << cars[5] << endl;
    cout << cars.size() << endl;
    cout << cars.front() << endl;
    cout << cars.back() << endl;
    cout << cars.at(10) << endl;
    

}   