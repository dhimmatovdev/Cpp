#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now  = time(0); //hozirgi vaqtni olamiz (sekundlarda)
    char* dt = ctime(&now);  //Vaqtni matn sifatida formatlash 

    cout << "Hozirgi vaqt: "<<dt;
    return 0;
}