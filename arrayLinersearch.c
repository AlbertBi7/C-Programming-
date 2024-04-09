#include <stdio.h>

int main() {
    int i,n,find,flag=0,myArray[30];
    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&myArray[i]);
    }
    printf("Enter the number to find:");
    scanf("%d",&find);
    
    for(i=0;i<n;i++){
        if(myArray[i]==find){
            printf("The number %d is present in the array at index-%d",find,i);
            flag++;
        }
    }
    if(flag==0){
        printf("The number %d is not present in the array.",find);
    }
    
    return 0;
}