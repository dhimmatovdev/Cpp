/*
 Doiraning Radiusi orqali Uning Parametrlarini Hisoblash

*/

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;
// Doiraning yuzasinni hisoblaydigan funksiya
double doira_yuzi(double r) {

    return PI * pow(r,2);
}
// Doiraning uzunligini hisoblaydigan funksiya
double doira_uzunligi(double r) {
    return 2 * PI * r;
}
// Doira ichidagi kvadratning diognalini hisblalanadigan funksiya
double doira_diogonal(double r) {
    return 2 * r;
}

int main() {
    double r;
    cout<<"Doiraning radiusini kiriting: ";
    cin>>r;

    cout<<"Doiraning yuzi: "<<doira_yuzi(r)<<endl;
    cout<<"Doiraning uzunligi: "<<doira_uzunligi(r)<<endl;
    cout<<"Doira ichidagi kvadrating diognali: "<<doira_diogonal(r)<<endl;

    return 0;
}