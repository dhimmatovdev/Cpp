// Massivni e’lon qilish uchun quyidagi sintaksis ishlatiladi:
// data_type array_name[array_size];
/* 
data_type — massiv elementlarining turi (masalan, int, float, char).
array_name — massivning nomi.
array_size — massivdagi elementlar soni.

*/

#include <iostream>
using namespace std;

int main() {
    int num[]={12, 21, 36, 71, 24, 85, 12, 30, 25};
    int size = sizeof(num)/sizeof(num[0]);
    int max=num[0];
    for(int i = 0; i < size; i++) {
        if (num[i]>max) {
            max=num[i];
        }
    }
    cout << "Eng katta element: " << max<<endl;
}