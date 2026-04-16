#include<stdio.h>
int add (int num1, int num2){
    
    int sum = num1 + num2;
    return sum; 
    


}
int main(){

    int sum = add(75, 34);
    printf("The sum of the two numbers is %d", sum);

    return 0;

}
