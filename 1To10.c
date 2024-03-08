/*1. Countdown:
Print numbers from 10 to 1 using a while loop.*/

#include <stdio.h>
int main(){
    int n,i=1;
    printf("Enter how many numbers to be printed:");
    scanf("%d",&n);
    while(i<=n){
        printf("%d ",i);
        i++;
    }
    return 0;
}


