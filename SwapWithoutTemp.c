//2.swap two numbers without using temporary variable
#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter the values of the numbers:");
    scanf("%d%d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nThe numbers before swapping: %d and %d",num2,num1);
    printf("\nThe numbers after swapping: %d and %d",num1,num2);
    return 0;
}