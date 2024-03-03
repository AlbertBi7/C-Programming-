// Program checks whether a number given by the user is zero, positive, or negative
#include <stdio.h>
int main() {
    float number;
    printf("Enter the number to check:");
    scanf("%f",&number);
    if (number>0){
        printf("The number entered is Positive");
    }
    else if (number==0){
        printf("The number entered is zero");
        
    }
    else{
        printf("The number entered is negative");
    }
   
    return 0;
}

