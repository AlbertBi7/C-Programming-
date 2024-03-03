/* Write a C program to read roll no, name, and marks of three subjects and calculate the total, percentage.
a. If the percentage of the marks >=75 then print First Class with Distinction
b. If the percentage of the marks >=60 and <75 print First Class
c. If the percentage of the marks <60 print Second Class*/

#include <stdio.h>
int main() {
    float  perCent;
    int   total ,mark1,mark2,mark3,rollNo;
    char name[20];
    printf("Enter the Roll.No of the student:");
    scanf("%d",&rollNo);
    printf("Enter the Name of the student:");
    scanf(" %s",&name);
    printf("Enter the Marks of Mathematics:");
    scanf("%d",&mark1);
    printf("Enter the Marks of Science:");
    scanf("%d",&mark2);
    printf("Enter the Marks of English:");
    scanf("%d",&mark3);
    total=mark1+mark2+mark3;
    perCent=total/3;
    
    printf("-----Student Detail-----\nName of the student-%s\nRoll.No-%d\n",name,rollNo);
    printf("Marks in Mathematics-%d\nMarks in Science-%d\nMarks in English-%d\n",mark1,mark2,mark3);
    printf("Total Marks-%d Out of 300\nPercentage-%.2f%%\n",total,perCent);
    if (perCent>=75){
        printf("Congrats! You have got First Class with Distinction");
    }
    else if(perCent>=60 && perCent<75){
        printf("Congrats! You have got First Class"); 
    }
    else {
        printf("Congrats! You have got Second Class*");
    }
    return 0;
}