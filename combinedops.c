#include <stdio.h>
int main(){
    int age = 20;
    int score = 75;
    int passed = 1;
    printf("age greater than 18 AND score greater than 50: %d\n", age > 18 && score > 50);
    printf("score less than 60 OR passed is equal to 1: %d\n", score < 60 || passed == 1);
    printf("age NOT equal to 25: %d\n", !(age == 25));
    return 0;
}