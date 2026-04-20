#include <stdio.h>

void addTen(int *x) {
    *x = *x + 10;
}

int main() {
    int age = 20;
    addTen(&age);
    printf("age: %d\n", age);
    return 0;
}