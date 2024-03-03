//2.input 3 numbers (real or integer)and find the average of the three numbers with precision of format as 8.3
#include <stdio.h>
int main(){
    float num1, num2,num3,avg;
    printf("Enter the numbers:");
    scanf("%f%f%f",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("The average of the numbers %8.3f,%8.3f,%8.3f is %8.3f",num1,num2,num3,avg);
    return 0;
}