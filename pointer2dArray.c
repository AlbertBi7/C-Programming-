#include <stdio.h>
int main(){
    int i,j,rows,cols,A[20][20],*p;
   
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    printf("Enter the number of columns of:");
    scanf("%d",&cols);
    
        printf("Enter the elements:");
        for (i = 0;i<rows;i++) {
            for (j = 0;j<cols; j++) {
         scanf("%d", (*(A + i) + j));
            }
        }

        printf("The defined matrix is:\n");
        for (i= 0;i<rows; i++) {
            for (j= 0; j< cols; j++) {
                printf("%d ", *(*(A +i) +j));
        }
        printf("\n");
        }
    
   
 return 0;
}