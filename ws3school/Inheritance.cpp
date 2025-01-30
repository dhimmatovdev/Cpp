#include <iostream>
#include <string>
//Baza klass 
class Animal {
protected:
    std::string name;

public:
    void setName(const std::string &animalName) {
        name = animalName;
    }
    void speak() const {
        std::cout << name << " make a sound. "<< std::endl;
    }
};
class Dog : public Animal {
public:
    void bark() const {
        std::cout << name << " barks: Woof! Woof! "<< std::endl;
    }
};
int main() {
    Dog dog;
    dog.setName("Budy");
    dog.speak();
    dog.bark();

    return 0;
}