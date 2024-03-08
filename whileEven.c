/*Even Numbers:
Print all even numbers between 1 and 20 using a while loop.*/
#include <stdio.h>
int main(){
    int n,i=2;
    printf("Enter how many even numbers to be printed:");
    scanf("%d",&n);
    while(i<n){
        printf("%d ",i);
        i=i+2;
    }
    return 0;
}

