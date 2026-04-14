#include<stdio.h>

int main(){

    int a;
    int b;
    int max;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if (a > b){
        max = a;
    }
    else{
        max = b;
    }

    while (true){
        if (max % a == 0 && max % b == 0){
            break;
        }
    max++;
    }
    
    printf("The LCM of %d and %d is %d", a, b, max);
}