#include <iostream>
using namespace std;

/*
C++ dasturlash tilida enum (enumeration) ma'lumot turi, cheklangan va nomlangan qiymatlar to'plamini aniqlash uchun ishlatiladi. 
U kodni tushunishni osonlashtiradi va ma'lum bir qiymatlar to'plamiga qat'iy rioya qilishni ta'minlaydi. 
Bu turda har bir qiymatga avtomatik ravishda integer qiymatlar beriladi, boshlang'ich qiymati 0 bo'ladi.
*/

enum Rang {Qizil, Oq, Yashil, Sariq, Kok, Moviy, Qora};

int main() {
    Rang mening_rangim = Yashil;

    if (mening_rangim == Yashil) {
        cout << "Mening sevimli rangim yashil!\n";
    }
    return 0;
}