#include <stdio.h>

int factorial_rec(int);
int factorial_nrec(int);
int main(){
    int i,n;
    printf("Enter the number to find facrorial of:");
    scanf("%d",&n);
    int fact1=factorial_nrec(n);
    int fact=factorial_rec(n);
    printf("\nThe factorial of %d by non-recursive method is %d.",n,fact1);
    printf("\nThe factorial of %d by recursive method is %d.",n,fact);
    return 0;
}

int factorial_rec(int n){
    if (n==0 || n==1)return 1;
    else{
        return n*factorial_rec(n-1);
    }
}
int factorial_nrec(int n){
        int fact=1;
        for(int i=1;i<=n;i++){
            fact *=i;
        }
        return fact;
}