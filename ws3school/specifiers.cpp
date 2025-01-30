#include <iostream>
class MyClass {
private:
    int privateVar;

public:
    void setPrivateVar(int value) {
        privateVar = value;  // private o'zgaruvchini o'zgartirish
    }

    int getPrivateVar() {
        return privateVar;  // private o'zgaruvchining qiymatini qaytarish
    }
};

int main() {
    MyClass obj;
    obj.setPrivateVar(42);  // privateVar ni o'zgartirish
    std::cout << obj.getPrivateVar();  // privateVar ni o'qish
    return 0;
}