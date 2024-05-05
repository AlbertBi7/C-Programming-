#include <stdio.h>
int main(){
    int i,j,rows,cols,A[20][20];
   
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    printf("Enter the number of columns of:");
    scanf("%d",&cols);
    if(i==j){
        for(i=0;i<rows;i++){
            for(j=0;j<cols;j++){
                printf("Enter the element of matrix A at index-[%d,%d]:\n",i,j);
                scanf("%d",&A[i][j]);
            }
        }

        printf("The defined matrix is:\n");
        for(i=0;i<rows;i++){
            for(j=0;j<cols;j++){
                printf("%d  ",A[j][i]);
            }
            printf("\n");
        }
    }
    else printf("Not possible to take transpose.");
 return 0;
}