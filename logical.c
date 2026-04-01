#include <stdio.h>

int main() {
    int x = 10;
    int y = 5;
    int z = 8;

    printf("x>y && x>z: %d\n", x > y && x > z);
    printf("y>x || z>y: %d\n", y > x || z > y);
    printf("!(x == y): %d\n", !(x == y));
    printf("x>y && y>z: %d\n", x > y && y > z);

    return 0;
}