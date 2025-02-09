# 📌 **C++ STL: Vektor (`vector`) haqida batafsil**  

**Vektor (`std::vector`)** – C++ STLda **dinamik massiv** sifatida ishlatiladigan eng mashhur konteynerlardan biridir.  
Uning asosiy afzalligi – **o‘lchami avtomatik ravishda o‘sadi va kerak bo‘lsa qisqaradi**.  

---  

## 📍 **1. `vector` ning asosiy xususiyatlari**  
✅ Dinamik o‘lchamga ega (yangi element qo‘shilganda hajm avtomatik o‘sadi).  
✅ **Massiv kabi indeks bo‘yicha** murojaat qilish mumkin (**O(1)** tezlikda).  
✅ **Oxiridan (`push_back()` bilan) tez qo‘shiladi**, lekin o‘rtadan yoki boshidan qo‘shish sekinroq.  
✅ **Xotira avtomatik boshqariladi**, qo‘lda `delete` ishlatish shart emas.  

---  

## 📍 **2. `vector` e'lon qilish va boshlang‘ich qiymat berish**  

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;            // Bo‘sh vektor
    vector<int> v2(5);         // 5 ta element, barchasi 0
    vector<int> v3(5, 100);    // 5 ta element, barchasi 100
    vector<int> v4 = {1, 2, 3}; // 1, 2, 3 qiymatlari bilan to‘ldirilgan

    return 0;
}
```

**Natija:**  
`v2 = {0, 0, 0, 0, 0}`  
`v3 = {100, 100, 100, 100, 100}`  
`v4 = {1, 2, 3}`  

---

## 📍 **3. `push_back()` va `pop_back()` – element qo‘shish va olib tashlash**
- `push_back(x)`: **Oxiriga yangi element qo‘shadi**  
- `pop_back()`: **Oxirgi elementni olib tashlaydi**  

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Oxirgi element: " << v.back() << endl; // 30
    v.pop_back(); // 30 ni o‘chiramiz

    cout << "Yangi oxirgi element: " << v.back() << endl; // 20

    return 0;
}
```

**Natija:**  
```
Oxirgi element: 30  
Yangi oxirgi element: 20  
```

---

## 📍 **4. `size()` va `capacity()` – o‘lcham va xotira hajmi**
- `size()` – **vektor hozirda nechta elementga ega** ekanligini bildiradi.  
- `capacity()` – **vektor ajratilgan xotira hajmi** (uning o‘lchami `size()` dan katta bo‘lishi mumkin).  

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    
    cout << "Dastlab: size = " << v.size() << ", capacity = " << v.capacity() << endl;

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout << "Pushlardan keyin: size = " << v.size() << ", capacity = " << v.capacity() << endl;

    return 0;
}
```

**Natija:**  
```
Dastlab: size = 0, capacity = 0  
Pushlardan keyin: size = 3, capacity = 4  
```
> ⚡ **Eslatma:** `capacity()` o‘sishi **ikki barobar** bo‘ladi (`2, 4, 8, 16, ...`).  

---

## 📍 **5. `at()` va `operator[]` – Indeks bo‘yicha murojaat qilish**
- `v[i]` – indeks bo‘yicha murojaat **tezroq**, lekin **xato tekshirmaydi**.  
- `v.at(i)` – indeks bo‘yicha murojaat **xato tekshiradi**.  

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    cout << v[1] << endl;    // 20
    cout << v.at(2) << endl; // 30

    // cout << v.at(10); // Xato! (out_of_range xatosi bo‘ladi)
    
    return 0;
}
```

---

## 📍 **6. `insert()`, `erase()` va `clear()` – Element qo‘shish va o‘chirish**
- `insert()` – **istalgan joyga yangi element qo‘shish**  
- `erase()` – **istalgan joydan element o‘chirish**  
- `clear()` – **barcha elementlarni o‘chirish**  

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    v.insert(v.begin() + 2, 25); // 2-indeksga 25 qo‘shish
    v.erase(v.begin() + 3);      // 3-indeksdagi elementni o‘chirish
    v.clear();                   // Barcha elementlarni o‘chirish

    cout << "Hajm: " << v.size() << endl; // 0
    return 0;
}
```

**Natija:**  
```
Hajm: 0
```

---

## 📍 **7. `front()` va `back()` – Birinchi va oxirgi elementlarni olish**
```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    cout << "Birinchi element: " << v.front() << endl; // 10
    cout << "Oxirgi element: " << v.back() << endl;    // 30

    return 0;
}
```

---

## 📍 **8. `sort()` bilan tartiblash**
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {50, 10, 40, 20, 30};

    sort(v.begin(), v.end()); // Kichikdan kattaga

    for (int x : v)
        cout << x << " "; // 10 20 30 40 50

    return 0;
}
```

---

## 📍 **9. `reverse()` bilan elementlarni teskari qilish**
```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    reverse(v.begin(), v.end());

    for (int x : v)
        cout << x << " "; // 40 30 20 10

    return 0;
}
```

---

## 🎯 **Xulosa**
✅ `vector` – **dinamik massiv** bo‘lib, **tez va samarali** ishlaydi.  
✅ **`push_back()` va `pop_back()`** yordamida **elementlar qo‘shish va olib tashlash oson**.  
✅ **`insert()` va `erase()`** yordamida **istalgan joyda o‘zgarish qilish mumkin**, lekin **o‘rtadan qo‘shish sekinroq**.  
✅ **`sort()` va `reverse()`** algoritmlar yordamida **tez va oson manipulyatsiya qilish** mumkin.  
✅ **`size()` va `capacity()`** bilan **xotira va hajmni nazorat qilish mumkin**.  

🚀 **C++ da `vector` ni mukammal o‘rganish – samarali kod yozish uchun juda muhim!**