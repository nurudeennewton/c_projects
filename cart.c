#include<stdio.h>
int main(){
	char item[50] = "";
	float price;
	int quantity;
	char currency ='#';
	float total = 0.0f;
	
	printf("What item would you ike to buy:");
	fgets( item, sizeof(item), stdin);
	
	printf("what is the price for each:");
	scanf("%f", &price);
	
	printf("how many would you like:");
	scanf("%d", &quantity);
	
	total = price * quantity;
	
    printf("You have bought %d %s", quantity, item);
	printf("%c%.2f", currency, total);
	
	return 0;

	
}