// If the ages of Ram, Shyam, and Ajay are input through the keyboard, write a program to determine the youngest of the three. (Use if-else if…else)

#include <stdio.h>
int main() {
    int ageR,ageS,ageA;
    printf("Enter the age of Ram, Shyam and Ajay:");
    
    scanf("%d %d %d",&ageR,&ageS,&ageA);
    if ((ageR<ageS)&&(ageR<ageA)){
        printf("Ram (%d) is the youngest",ageR);
    }
    else if (ageS<ageA){
        printf("Shyam (%d) is the youngest",ageS);
        
    }
    else{
        printf("Ajay (%d) is the youngest",ageA);
    }

    return 0;
}