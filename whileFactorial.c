/*Factorial (5!=1*2*3*4*5)
Compute the factorial of a given number using a while loop.*/

#include <stdio.h>
int main(){
    int n,i=1,factorial=1;
    printf("Enter the number to find Factorial:");
    scanf("%d",&n);
    while(i<=n){
        factorial=factorial*i;
        i++;
    }
    printf("The factorial of %d is %d",n,factorial);
    return 0;
}

