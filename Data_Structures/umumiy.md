C++ dasturlash tilida **ma'lumot tuzilmalari (Data Structures)** va **Standart shablon kutubxonasi (STL – Standard Template Library)** dasturchilarga samarali va moslashuvchan kod yozishda katta yordam beradi. Keling, shu mavzuni batafsil ko‘rib chiqamiz.  

---

## 📌 **C++ Ma'lumot Tuzilmalari (Data Structures)**
Ma'lumot tuzilmalari – bu ma'lumotlarni samarali saqlash va ishlov berish usullaridir. C++ dasturlash tilida eng ko‘p ishlatiladigan ma'lumot tuzilmalari quyidagilar:  

### **1️⃣ Massiv (Array)**
- O‘lchami oldindan belgilangan bo‘lishi kerak.  
- **Statik** va **dinamik** turlari mavjud.  
- Tez ishlaydi, lekin qo‘shish/o‘chirish operatsiyalari qiyin.  
- **Misol**:
  ```cpp
  int arr[5] = {1, 2, 3, 4, 5};
  ```

### **2️⃣ Vektor (Vector - Dinamik massiv) [STL]**
- O‘lchami o‘sishi mumkin.  
- **STLning `vector` konteyneri** orqali ishlatiladi.  
- Yangi element qo‘shish va o‘chirish oson.  
- **Misol**:
  ```cpp
  #include <vector>
  #include <iostream>
  using namespace std;

  int main() {
      vector<int> v = {1, 2, 3};
      v.push_back(4); // 4 ni qo‘shish
      cout << v[2];   // 3 ni chiqarish
      return 0;
  }
  ```

### **3️⃣ Bog‘langan ro‘yxat (Linked List)**
- **Massivdan farqli** ravishda dinamik o‘lchamga ega.  
- Qo‘shish va o‘chirish **tezroq**, lekin indeks bo‘yicha murojaat qilish sekin.  
- **STLda `list` konteyneri orqali** ishlatiladi.  
- **Misol**:
  ```cpp
  #include <list>
  #include <iostream>
  using namespace std;

  int main() {
      list<int> myList = {10, 20, 30};
      myList.push_back(40); // Oxiriga qo‘shish
      myList.push_front(5); // Boshiga qo‘shish

      for (int x : myList)
          cout << x << " "; // 5 10 20 30 40
      return 0;
  }
  ```

### **4️⃣ To‘plam (Set - Unique values)**
- Takroriy qiymatlarni **saqlamaydi**.  
- Elementlar tartiblangan holatda saqlanadi.  
- **Misol**:
  ```cpp
  #include <set>
  #include <iostream>
  using namespace std;

  int main() {
      set<int> mySet = {10, 20, 30, 20, 10}; // Faqat unikal qiymatlar
      for (int x : mySet)
          cout << x << " "; // 10 20 30
      return 0;
  }
  ```

### **5️⃣ Jadval (Map - Kalit-qiymat juftligi)**
- Kalit (key) va qiymat (value) juftligi orqali ma'lumot saqlaydi.  
- Tez qidirish va qo‘shish uchun ishlatiladi.  
- **Misol**:
  ```cpp
  #include <map>
  #include <iostream>
  using namespace std;

  int main() {
      map<string, int> myMap;
      myMap["apple"] = 100;
      myMap["banana"] = 150;

      cout << myMap["apple"]; // 100
      return 0;
  }
  ```

---

## 🚀 **C++ Standart Shablon Kutubxonasi (STL)**
STL C++ tilining **tayyor ma'lumot tuzilmalari** va **algoritmlari** jamlanmasi bo‘lib, **uch asosiy qismdan iborat**:  

1️⃣ **Konteynerlar (Containers)** – Ma'lumotlarni saqlash uchun (vector, list, set, map).  
2️⃣ **Algoritmlar (Algorithms)** – Sortlash, qidirish kabi funksiyalar (sort, find, binary_search).  
3️⃣ **Iteratorlar (Iterators)** – Konteyner elementlarini boshqarish uchun.  

---

## 🔥 **C++ STLning Eng Ko‘p Ishlatiladigan Qismlari**  

### ✅ **1. Vector bilan ishlash**
```cpp
#include <vector>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};
    v.push_back(4); // 4 ni qo‘shish
    v.pop_back();   // Oxirgi elementni o‘chirish

    for (int x : v)
        cout << x << " "; // 1 2 3
    return 0;
}
```

### ✅ **2. Sortlash (`sort()`)**
```cpp
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    vector<int> v = {3, 1, 4, 1, 5};
    sort(v.begin(), v.end());

    for (int x : v)
        cout << x << " "; // 1 1 3 4 5
    return 0;
}
```

### ✅ **3. Map bilan ishlash**
```cpp
#include <map>
#include <iostream>
using namespace std;

int main() {
    map<string, int> fruitPrices;
    fruitPrices["apple"] = 100;
    fruitPrices["banana"] = 150;

    cout << fruitPrices["apple"]; // 100
    return 0;
}
```

### ✅ **4. Stack (LIFO - Oxiridan chiqadi)**
```cpp
#include <stack>
#include <iostream>
using namespace std;

int main() {
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.top(); // 30
    s.pop(); // 30 ni olib tashlash

    cout << s.top(); // 20
    return 0;
}
```

### ✅ **5. Queue (FIFO - Birinchi kirgan birinchi chiqadi)**
```cpp
#include <queue>
#include <iostream>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.front(); // 1
    q.pop(); // 1 ni olib tashlash

    cout << q.front(); // 2
    return 0;
}
```

---

## 🎯 **Xulosa**
- C++ **ma'lumot tuzilmalari** va **STL** kodni optimallashtirish uchun **muhim vosita** hisoblanadi.  
- STL **konteynerlar**, **algoritmlar** va **iteratorlardan** iborat.  
- **`vector`**, **`list`**, **`map`**, **`set`**, **`queue`**, **`stack`** kabi konteynerlar juda foydali.  
- **`sort()`**, **`find()`**, **`binary_search()`** kabi funksiyalar ishni osonlashtiradi.  

C++da **STLni o‘rganish** – **mahsuldorlikni oshirish** va **samarali kod yozish** uchun juda foydali! 🚀