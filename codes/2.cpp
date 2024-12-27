#include <iostream>
#include <vector>
#include <algorithm> // max_element, miin_element uchun kerak
using namespace std;

int main() {
    vector<int> scores; // Ballarni saqlash uchun vektor
    int n, score;

    cout << "Necha talabaga ball kiritasiz?";
    cin >> n;

    // Ballarni kiritamiz
    cout << "Talabalarni kiriting: \n";
    for (int i = 0; i < n; i++) {
        cout << "Talaba" << i+1<<": ";
        cin >> score;
        scores.push_back(score);
        
    }
    // Hisoblash
    int max_Score = *max_element(scores.begin(), scores.end());
    int min_Score = *min_element(scores.begin(), scores.end());
    double avgScore = 0;
    cout << "\nNatijalar: \n";
    cout << "Eng yuqori ball: " << max_Score<< endl;
    cout << "Eng pastki ball: " << min_Score<< endl;
    cout << "O'rtacha ball: " << avgScore<< endl;

    return 0;
}