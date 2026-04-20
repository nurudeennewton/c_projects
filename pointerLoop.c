#include<stdio.h>
int main(){

    int num[5];
    for ( int i = 0; i < 5; i++){

        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);


    }

    for ( int i = 0; i < 5; i++){

        printf("Number %d: %d\n", i + 1, *(num + i));
        printf("Number %d address: %p\n", i +1, &num[i]);
    }


    return 0;
}