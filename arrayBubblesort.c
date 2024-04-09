#include <stdio.h>
int main(){
    int i,n,pass,temp,myArray[30];
    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&myArray[i]);
    }

    for(pass=0;pass<n;pass++){
        for(i=0;i<n-pass-1;i++){
            if(myArray[i]>myArray[i+1]){
                temp=myArray[i];
                myArray[i]=myArray[i+1];
                myArray[i+1]=temp;
            }
        }
    }
    printf("The sorted array is:");
    for(i=0;i<n;i++){
        printf("%d ",myArray[i]);
    }
    return 0;
}

