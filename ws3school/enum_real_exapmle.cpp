/* 
Enum yordamida abstrakt raqamli qiymatlarni aniq nomlar bilan almashtirish mumkin. 
Bu kodni o‘qishni osonlashtiradi va boshqalar uchun tushunarli qiladi.
*/

//Enum faqat keltirilgan qiymatlar to‘plami bilan ishlaydi. Tasodifiy yoki noto‘g‘ri qiymat kiritishni oldini oladi.


/*
Enumni ishlatishning asosiy holatlari
Holatlarni boshqarish: Masalan, o‘yinlarda turli o‘yin rejimlari yoki qadamlarni belgilash.
Ranglar yoki toifalar: Foydalanuvchi interfeysi uchun ranglarni belgilash.
Qo‘shimcha vazifalar: Faoliyatlar yoki kompyuter xatolarini aniqlash.
*/

#include <iostream>
using namespace std;
// Oddiy enum
enum Holat{Onlayn=1, Offline, Band, Kutmoqda};  

//C++11 da enum class
enum class XabarTuri {Oddiy, Ogohlantirish, Xato};

//Funksiya holatini chiqaish

void holatniBosibChiqar(Holat holat) {
    switch (holat) {
        case Onlayn:
            cout << "Foydalanuvchi onlayn\n";
            break;
        case Offline:
            cout << "Foydalanuvchi offline\n";
            break;
        case Band:
            cout << "Foydalanuvchi band\n";
            break;
        case Kutmoqda:
            cout << "Foydalanuvchi kutmoqda\n";
            break;
        default:
            cout << "Noma'lum holat\n";
            break;
    }
}

// Xabar turini ko'rsatish (enum class bilan)

void xabarniBosibChiqar(XabarTuri turi) {
    switch (turi) {
        case XabarTuri::Oddiy:
            cout << "Oddiy xabar\n";
            break;
        case XabarTuri::Ogohlantirish:
            cout << "Ogohlantirish xabari\n";
            break;
        case XabarTuri::Xato:
            cout << "Xato xabari\n";
            break;
        default:
            cout << "Noma'lum xabar\n";
    }
}

int main() {
    // Oddiy enum bilan ishlash
    Holat foydalanuvchiHolati = Band; // Foydalanuvchi band holatda
    holatniBosibChiqar(foydalanuvchiHolati);

    // Qiymatni o'zgartirish
    foydalanuvchiHolati = Kutmoqda; // Endi foydalanuvchi kutmoqda
    holatniBosibChiqar(foydalanuvchiHolati);

    // C++11 enum class bilan ishlash
    XabarTuri xabar = XabarTuri::Ogohlantirish;
    xabarniBosibChiqar(xabar);

    // Yangi xabar turini o'rnatish
    xabar = XabarTuri::Xato;
    xabarniBosibChiqar(xabar);

    return 0;
}

