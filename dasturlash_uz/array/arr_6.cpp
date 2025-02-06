/*
Misol Sharti
n, array[] berilgan.

Shu massiv oxiriga n ni jo'ylashtiring va massivni konsolga chiqaring.


    */
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {6, 25, 91, 23, 72, 9, 18, 6};
    int n;
    cin >> n;
    
    // `push_back` orqali yangi element qo‘shamiz
    arr.push_back(n);
    
    // Massivni chiqarish
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
// vektor avtomatik o'lchamni o'zgartira oladi.

