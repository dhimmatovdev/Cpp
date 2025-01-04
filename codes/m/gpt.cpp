#include <iostream>
#include <algorithm> // sort funksiyasi uchun
using namespace std;

int main() {
    int arr[] = {3,8,6,7,9,2}; // Berilgan massiv
    int n = sizeof(arr) / sizeof(arr[0]); // Massiv uzunligini aniqlash

    // 1. Massivni tartibga keltirish
    sort(arr, arr + n);

    int sum = 0;

    // 2. Juftliklarni topib, kichiklarini yig'ish
    for (int i = 0; i < n; i += 2) {
        sum += arr[i]; // Juftlikdagi kichikroq qiymatni qo'shish
    }

    // 3. Natijani chiqarish
    cout << "Minimum raqamlarning yig'indisi: " << sum << endl;

    return 0;
}
