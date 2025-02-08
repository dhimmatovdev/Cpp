#include <stdio.h>

int main() {
    // Fayl yaratish va ochish
    FILE *MyFile = fopen("filename.txt", "w"); // "w" - yozish rejimi

    // Faylga yozish
    if (MyFile != NULL) {
        fprintf(MyFile, "Fsgsgssdsgbse tricky, but it is fun enough!");
        fclose(MyFile); // Faylni yopish
    } else {
        printf("Faylni ochib bo'lmadi.\n");
    }

    return 0;
}
