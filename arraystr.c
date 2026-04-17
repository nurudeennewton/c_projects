#include<stdio.h>
#include<string.h>

int main(){

    char first[20] = "Nurudeen";
    char last[20] = "Newton";
    char full[40];

    strcpy(full, first);
    strcat(full, " ");
    strcat(full, last);

    printf("full name: %s\n", full);
    printf("Lenght of full nmae: %d\n", strlen(full));

    return 0;
}