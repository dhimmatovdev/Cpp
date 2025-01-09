#include <iostream>
#include <string>
using namespace std;
struct car
{
    string brand;
    string model;
    int year;
};

int main()
{
    car myCar1;
    myCar1.brand = "Ford";
    myCar1.model = "Mustang";
    myCar1.year = 1969;

    car myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
  return 0;
}
