#include <iostream>
#include <chrono> // Chrono kutubxonasini ulash

int main() {
    auto start_time = std::chrono::high_resolution_clock::now();

    // Sikl orqali hisoblash (yoki boshqa jarayon)
    for (int i = 0; i < 1000000; i++) {
        int square = i * i; // Har bir raqamning kvadratini hisoblash
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    auto elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);

    std::cout << "C++ bajarilish vaqti: " << elapsed_time.count() << " ms" << std::endl;
    return 0;
}
