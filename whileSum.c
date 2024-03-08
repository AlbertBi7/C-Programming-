/*Sum of Natural Numbers:
Calculate the sum of the first N natural numbers using a while loop.*/
#include <stdio.h>
int main(){
    int n,i=1,sum=0;
    printf("Enter how many numbers to be sumed:");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        i++;
    }
    printf("Sum of first %d numbers is %d",n,sum);
    return 0;
}

