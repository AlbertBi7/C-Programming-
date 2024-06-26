#include <stdio.h>
//Declaration of functions.
void readMatrix(int[5][5], int, int);
void printMatrix(int[5][5], int, int);
void addition(int[5][5], int[5][5], int[5][5], int, int);
void transpose(int[5][5], int, int);
void multiplication(int[5][5], int[5][5], int[5][5], int, int, int);

//Function for printing the matrix.
void printMatrix(int matrix[5][5], int row, int col) {
    printf("The element of the matrix is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
//Function for reading the matrix.
void readMatrix(int matrix[5][5], int row, int col) {
    printf("Enter the elements:\n");
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
             scanf("%d", &matrix[i][j]);
        }
    }
}
//Function for adding the matrix.
void addition(int matrix1[5][5], int matrix2[5][5], int sumMatrix[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
//Function for transposing the matrix.
void transpose(int matrix[5][5],int row,int col){
    printf("The Transpose of matrix is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
}

//Function for multiplication of the matrix.
void multiplication(int matrix1[5][5], int matrix2[5][5], int prdMatrix[5][5], int rowsA, int colsA, int rowsB){
    int prt=0;
    for(int i=0;i<rowsA;i++){
        for(int j=0;j<colsA;j++){
            //prdMatrix[i][j]= 0;
            for(int k=0; k<rowsB;k++){
                prt+=matrix1[i][k]*matrix2[k][j];
            }
        prdMatrix[i][j]=prt;
        prt=0;
    
        }
    }

}

    
    


int main() {
    char choice;
    int i,j,operation,rowsA,rowsB,colsB,colsA,A[5][5],B[5][5],C[5][5];;
    //menu.
    do {
        printf("\nMenu:\n");
        printf("1.ADDITION OF MATRIX\n");
        printf("2.TRANSPOSE OF MATRIX\n");
        printf("3.MULTIPLICATION OF MATRIX\n");
        printf("4.EXIT\n");
      
        printf("Enter an operation: ");
        scanf(" %d", &operation);
        
        switch(operation) {
            //Case for Addition. 
            case 1:
                //Entering value for rows and colums of matrix 1 and 2.
                printf("Enter the number of rows and columns of matrix 1:");
                scanf("%d%d",&rowsA,&colsA);
                printf("\nEnter the number of rows and columns of matrix 2:");
                scanf("%d%d",&rowsB,&colsB);

                //checking condition for addition.
                if(rowsA==rowsB && colsA==colsB){
                readMatrix(A, rowsA, colsA);
                readMatrix(B, rowsB, colsB);
                addition(A, B, C, rowsA, colsA);
                    printf("matriX 1:\n");
                    printMatrix(A, rowsA, colsA);
                    printf("matriX 2:\n");
                    printMatrix(B, rowsB, colsB);
                    printf("Addition of two matrices:\n");
                    printMatrix(C, rowsA, colsA);
                }               
                else{
                    printf("\nAddition of two matrices not possible:");
                }

                break;
            //Case for transpose.    
            case 2:
                //Reading rows and columns.
                printf("Enter the number of rows and columns of matrix:");
                scanf("%d%d",&rowsA,&colsA);
                readMatrix(A, rowsA, colsA);
                printMatrix(A, rowsA, colsA);
                transpose(A, rowsA, colsA);
                break;
            //Case for Multiplication.    
            case 3:
                //Reading rows and columns for matrix 1 and 2.
                printf("Enter the number of rows and columns of matrix 1:");
                scanf("%d%d",&rowsA,&colsA);
                printf("\nEnter the number of rows and columns of matrix 2:");
                scanf("%d%d",&rowsB,&colsB);

                //Checking conditions for multiplication.
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
                else{
                    printf("\nMultiplication of two matrices not possible:");
                }

                break;
            //Case for exiting.
            case 4:
                printf("Exiting..\n");
                break;
            default:
                printf("Error! Invalid operation\n");
        }
        //Checking to exit the loop.
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    return 0;
}