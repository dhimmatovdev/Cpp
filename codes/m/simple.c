#include <stdio.h>

int max(int a, int b) {
    return (a>b)?a:b;
}
int min(int a, int b) {
    return (a<b)?a:b;
}

int main() {
    int a=10, b=20;
    printf("Katta son: %d\n", max(a, b));
    return 0;
}