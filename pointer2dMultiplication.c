#include <stdio.h>
void readMatrix(int[5][5], int, int);
void printMatrix(int[5][5], int, int);
void multiplication(int[5][5], int[5][5], int[5][5], int, int, int);

int main(){
    int rowsA,colsA,rowsB,colsB,A[5][5],B[5][5],C[5][5];
    printf("Enter the number of rows and columns of matrix 1:");
                scanf("%d%d",&rowsA,&colsA);
                printf("\nEnter the number of rows and columns of matrix 2:");
                scanf("%d%d",&rowsB,&colsB);

                
                if(rowsB==colsA){
                readMatrix(A, rowsA, colsA);
                readMatrix(B, rowsB, colsB);
                multiplication(A, B, C, rowsA, colsA, rowsB);
                    printf("matriX 1:\n");
                    printMatrix(A, rowsA, colsA);
                    printf("matriX 2:\n");
                    printMatrix(B, rowsB, colsB);
                    printf("Product of two matrices:\n");
                    printMatrix(C, rowsA, colsB);
                }
    return 0;
}

void printMatrix(int matrix[5][5], int row, int col) {
    printf("The element of the matrix is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
void readMatrix(int matrix[5][5], int row, int col) {
    printf("Enter the elements:\n");
    for (int i = 0;i<row;i++) {
            for (int j = 0;j<col; j++) {
         scanf("%d", (*(matrix + i) + j));
            }
    }
}
void multiplication(int matrix1[5][5], int matrix2[5][5], int prdMatrix[5][5], int rowsA, int colsA, int rowsB){
    int prt=0;
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsA;j++){
            for(int k=0; k<rowsB;k++){
                prt+=*(*(matrix1+i)+k) * *(*(matrix2+k)+j);
            }
        *(*(prdMatrix+i)+j)=prt;
        prt=0;
        }
    }
}