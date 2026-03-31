#include <stdio.h>
int main(){
    int x = 17;
    int y = 5;
    printf("Addition: %d\n", x+y);
    printf("Subtraction:%d\n", x-y);
    printf("Multiplication: %d \n", x*y);
    printf("Division: %.3f \n", (float)x/y);
    printf("Reminder: %d \n", x%y);
    return 0;
}