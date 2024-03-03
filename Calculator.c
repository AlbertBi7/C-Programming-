//3.take two input values and perform all arithmetic operations on the given input.
#include <stdio.h>
int main(){
    int num1,num2;
    printf("Enter the numbers:");
    scanf("%d%d",&num1,&num2);
    printf("%d + %d = %d\n",num1,num2,num1+num2);
    printf("%d - %d = %d\n",num1,num2,num1-num2);
    printf("%d * %d = %d\n",num1,num2,num1*num2);
    printf("%d / %d = %d\n",num1,num2,num1/num2);
    printf("%d %% %d = %d\n",num1,num2,num1%num2);
    return 0;
}