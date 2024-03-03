/*Write a C Program To Find Simple Interest*/
#include <stdio.h>
int main(){
    float principal, simpleIntrest;
    int time , rate;
    printf("Enter the principal amount:");
    scanf("%f",&principal);
    printf("\nEnter the time(in years):");
    scanf("%d",&time);
    printf("\nEnter the rate(in percentage):");
    scanf("%d",&rate);
    simpleIntrest=(principal*rate*time)/100;
    printf("\nThe Simple Intrest is:%.4f",simpleIntrest);
    printf("\nThe Amount is:%.4f",simpleIntrest+principal);
    return 0;

}