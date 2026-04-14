#include<stdio.h>

// LEAST COMMMON MULTIPE OF TWO MUMBERS

int multipleA(int a, int b, int multA){
	for( int i = 1; i < b; i++ ){
		
		multA = a * i;
		
		
	}
	
    return multA;
}

int multipleB(int a, int b, int multB){
	for( int i = 1; i < a; i++ ){
		
		multB = b * i;
		
		
	}
	
    return multB;
}

int main (){
	
	int a; 
	int b;
	int multA;
	int multB;
	printf("Enter the first number: \n");
	scanf("%d", &a);
	
	printf("Enter the second number: \n");
	scanf("%d", &b);
	
	if( multA == multB){
		
		printf("The LCM of %d and %d is %d", a, b, multA);
		
	}
	
	return 0;
}