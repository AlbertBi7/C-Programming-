//C Program to Add Two Complex Numbers
#include <stdio.h>
int main(){
    
    int num1R,num1I,num2R,num2I,a,b;
    printf("Enter the Real Part of the NUMBERS:");
    scanf("%d%d",&num1R,&num2R);
    printf("Enter the Imaginary Part of the NUMBERS:");
    scanf("%d%d",&num1I,&num2I);
    a=num1R+num2R;
    b=num1I+num2I;
    if (b<0){
    printf("The sum of %d+%di and %d+%di = %d%di ",num1R,num1I,num2R,num2I,a,b);
    }
    else{
    printf("The sum of %d+%di and %d+%di = %d+%di ",num1R,num1I,num2R,num2I,a,b);
    }
    return 0;
}