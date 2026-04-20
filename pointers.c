#include<stdio.h>
int main(){

    int age = 20;
    int *p = &age;
    *p = 25;
    printf("Value: %d\n", age);
    printf("Address: %p\n", &age);
    printf("Value of  p (address its holds): %p\n", p);
    printf("Value at the address p points to: %d\n", *p);
    printf("age is now: %d\n", age);

    return 0;

}