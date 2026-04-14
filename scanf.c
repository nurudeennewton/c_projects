#include<stdio.h>
int main(){
	int age = 0;
	float gpa = 0.0f;
	char grade; // null terminator character
	char name[30];
	
	printf("Enter your age:");
	scanf("%d", &age);
	
	printf("Enter your gpa:");
	scanf(" %f", &gpa);
	
	printf("Enter your grade:");
	scanf(" %c", &grade);
	
    while(getchar() != '\n');
	printf("Enter your name:");
    
    fgets(name, sizeof(name), stdin);
	
	
	printf("Age: %d\n", age);
	printf("GPA: %.2f\n", gpa);
	printf("Grade: %c\n", grade);
	printf("Name: %s\n", name);
	
	return 0;
}