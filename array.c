#include<stdio.h>
int main(){

    int scores[5] =  {85, 90, 78, 92, 88};

    printf("First score: %d\n", scores[0]);
    printf("Second score: %d\n", scores[1]);
    printf("Fourth score: %d\n", scores[3]);


    for (int i = 0; i < 5; i++){
        printf("score %d: %d\n", i + 1, scores[i]);
    }
    return 0;
}