#include <iostream>
using namespace std;

enum HaftaningKunlari { DUSHANBA = 1, SESHANBA, CHORSHANBA, PAYSHANBA, JUMA, SHANBA, YAKSHANBA };

int main() {
    HaftaningKunlari bugun = JUMA;

    if (bugun == JUMA) {
        cout << "Bugun juma kunidir!\n";
    }
    return 0;
}
