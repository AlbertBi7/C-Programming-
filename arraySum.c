#include <stdio.h>

int main() {
    int i,n,sum=0,myArray[30];
    float average;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&myArray[i]);
        sum+=myArray[i];
    }
    average=(float)sum/n;
    printf("The Sum of the numbers in the array is=%d\n",sum);
    printf("The Average of the array is=%0.3f",average);
    
    return 0;
}