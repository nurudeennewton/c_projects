#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i+=2) {
        printf("Hello %d\n", i);
    }
    int count = 0;
    while (count <= 5) {
        printf("Count: %d\n", count);
        count+=2;
    }
    int x = 10;
    do {
        printf("x is: %d\n", x);
        x++;
    } while (x < 5);
    return 0;
}