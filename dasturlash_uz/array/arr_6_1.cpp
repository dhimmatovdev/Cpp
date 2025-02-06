#include <iostream>

using namespace std;

int main() {
    int arr[] = {6, 25, 91, 23, 72, 9, 18, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int n;
    cin >> n;

    // Yangi massiv yaratamiz (1 ta katta)
    int newArr[size + 1];

    // Eski elementlarni nusxalash
    for (int i = 0; i < size; i++) {
        newArr[i] = arr[i];
    }

    // Oxirgi elementga `n` qo‘shish
    newArr[size] = n;

    // Natijani chiqarish
    for (int i = 0; i < size + 1; i++) {
        cout << newArr[i] << " ";
    }
    cout << endl;

    return 0;
}
