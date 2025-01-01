#include <iostream>
using namespace std;

int main() {
    int number;
    do {
        cout << "Musbat son kiriting: ";
        cin >> number;
        if (number<=0) {
            cout << "Xato kiritdingiz! Musbat son kiriting!" << endl;
        }
    } while (number <= 0);
    cout<< "Rahmat! Siz to'g'ri son kiritdingiz!" << number<< endl;

    return 0;
}