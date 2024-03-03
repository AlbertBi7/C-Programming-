//1.write a C program to read an integer number from keyboard and find the square of the number. 
#include <stdio.h>
int main(){
    int square;
    printf("Enter the number to find square:");
    scanf("%d",&square);
    printf("The square of %d is %d.",square,square*square);
    return 0;
}
