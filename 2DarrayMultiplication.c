#include <stdio.h>
int main(){
    int i,j,k,rowsA,colsA,rowsB,colsB,A[20][20],B[20][20],prt=0;
    
    printf("Enter the number of rows in matrix A:");
    scanf("%d",&rowsA);
    printf("Enter the number of columns in matrix A:");
    scanf("%d",&colsA);

    for(i=0;i<rowsA;i++){
            for(j=0;j<colsA;j++){
                printf("Enter the element of matrix A at index-[%d,%d]:\n",i,j);
                scanf("%d",&A[i][j]);
            }
        }

    printf("Enter the number of rows in matrix B:");
    scanf("%d",&rowsB);
    printf("Enter the number of columns in matrix B:");
    scanf("%d",&colsB);

   if(rowsB==colsA){
    for(i=0;i<rowsB;i++){
            for(j=0;j<colsB;j++){
                printf("Enter the element of element B at index-[%d,%d]:\n",i,j);
                scanf("%d",&B[i][j]);
            }
        }
    }
    else printf("NOT POSSIBLE!");


    int rowsC=rowsA;
    int colsC=colsB;
    int C[rowsC][colsC];
    

   
    for(i=0;i<rowsA;i++){
        for(j=0;j<colsA;j++){
            for(k=0;k<rowsB;k++){
                prt+=A[i][k]*B[k][i];
            }
        C[i][j]=prt;
        prt=0;
    
        }
    }

    printf("The product of matrix A and Matric B is  is:\n");
    for(i=0;i<rowsC;i++){
        for(j=0;j<colsC;j++){
            printf("%d  ",C[i][j]);
        }
        printf("\n");
    }
     

    return 0;} 
