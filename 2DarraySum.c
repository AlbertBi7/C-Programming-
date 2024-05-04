#include <stdio.h>
int main(){
    int i,j,rowsA,colsA,rowsB,colsB,A[20][20],B[20][20],C[20][20],sum=0;
    
    printf("Enter the number of rows in matrix A:");
    scanf("%d",&rowsA);
    printf("Enter the number of columns in matrix A:");
    scanf("%d",&colsA);
    printf("Enter the number of rows in matrix B:");
    scanf("%d",&rowsB);
    printf("Enter the number of columns in matrix B:");
    scanf("%d",&colsB);
    if(rowsA==rowsB&&colsA==colsB){
        for(i=0;i<rowsA;i++){
            for(j=0;j<colsA;j++){
                printf("Enter the element of matrix A at index-[%d,%d]:\n",i,j);
                scanf("%d",&A[i][j]);
            }
        }
        for(i=0;i<rowsB;i++){
            for(j=0;j<colsB;j++){
                printf("Enter the element of element B at index-[%d,%d]:\n",i,j);
                scanf("%d",&B[i][j]);
            }
        }
        for(i=0;i<rowsA;i++){
            for(j=0;j<colsA;j++){
                C[i][j]=A[i][j]+B[i][j];

            }
        }
    }
    printf("The Sum of matrix A and Matric B is  is:\n");
    for(i=0;i<rowsA;i++){
        for(j=0;j<colsA;j++){
            printf("%d  ",C[i][j]);
        }
        printf("\n");
    }
 return 0;
}