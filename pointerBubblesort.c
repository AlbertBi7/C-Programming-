#include <stdio.h>
int main(){
    int i,n,j;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int L[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&L[i]);
    }
    int *ptr=L;
    for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (*(ptr+j) > *(ptr+j+1)) {
                int temp = *(ptr + j+1); 
                *(ptr + j+1) = *(ptr + j);  
                *(ptr + j) = temp;
             }
        }
    }
    printf("\nThe elements in an after sorting the array is:");
    for(i=0;i<n;i++){
        printf("%d ",L[i]);
    }
    return 0;
}
