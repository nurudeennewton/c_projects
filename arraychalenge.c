#include<stdio.h>

int main(){

    int num[5];
    int sum = 0;
    for ( int i = 0; i < 5; i++){

        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);


    }

    for (int i = 0; i < 5; i++){
        printf("Number  %d: %d\n", i + 1, num[i]);
    }

    for (int i = 0; i < 5; i++){

         sum = sum + num[i];

    }
    printf(" The sum of the 5 numbers is %d", sum);
    return 0;
}