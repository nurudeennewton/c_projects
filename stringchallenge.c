#include<stdio.h>
#include<string.h>

int main(){

char firstName[20] = "";
char lastName[20] = "";
char fullName[40];

printf("Enter your first name: ");
fgets(firstName, sizeof(firstName), stdin);
firstName[strcspn(firstName, "\n")] = '\0';

printf("Enter your last name: ");
fgets(lastName, sizeof(lastName), stdin);
lastName[strcspn(lastName, "\n")] = '\0';

strcpy(fullName, firstName);
strcat(fullName, " ");
strcat(fullName, lastName);



printf("your full name is %s\n", fullName);
printf("full name length is %d", strlen(fullName));

    return 0;
}