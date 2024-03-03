#include <stdio.h> 
#include <math.h>
int main(){
    float principal, compoundIntrest,temp;
    int time , rate ,n;
    printf("Enter the principal amount:");
    scanf("%f",&principal);
    printf("\nEnter the time(in years):");
    scanf("%d",&time);
    printf("\nEnter the rate(in percentage):");
    scanf("%d",&rate);
    printf("\nEnter the number of time intrest is compounded per year:");
    scanf("%d",&n);
    temp=powf((1+rate/n),n*time);
    compoundIntrest=principal*temp;
    printf("\nThe Compound Intrest is:%.4f",compoundIntrest);
    
    return 0;

}