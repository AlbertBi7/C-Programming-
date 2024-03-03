// Write a C program to read the age of a candidate and determine whether he/she is eligible to cast his/her vote. 
#include <stdio.h>
int main() {
    int age;
    printf("Check if you are eligible for casting your vote\n");
    printf("Enter your age:");
    scanf("%d",&age);
    
    if (age>=21){
        printf("Congratulations! You are eligible to cast your vote");
    }
    else{
        printf("Unfortunately you are not eligible to cast your vote");
    }

    return 0;
}