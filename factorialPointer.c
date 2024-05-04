#include <stdio.h>
int factorial(int *);

int main(){
    int n,*ptr;
    printf("Enter the number to find factorial of:");
    scanf("%d",&n);
    ptr=&n;
    int fact=factorial(ptr);
    printf("The factorial of %d is = %d",n,fact);
    return 0;

}
int factorial(int *n){
    int fact=1;
    for(int i=1;i<=*n;i++){
        fact*=i;
    }
    return fact;
}