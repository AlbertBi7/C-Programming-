/*Write a C Program to check whether a given number is less than 100.if so check
whether it is odd or even.Otherwise display the result as “it is a positive number
greater than 100”.(Use Nested if)*/
#include <stdio.h>
int main() {
    int number;
    printf("Enter the Number to Check:");
    scanf("%d",&number);
    if (number>0 && number<100 ){
        if(number%2==0){
            printf("Number is less than 100 and Even");
        }
        else{
            printf("Number is less than 100 and Odd");
        }
    }
    else if(number>0){
        printf("Number is a positive number greater than 100");
    }
    else{
        printf("Number is a negative number");
    }
    return 0;
}