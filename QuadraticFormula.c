#include <stdio.h> 
#include <math.h>
int main(){
    int a,b,c,discriminant;
    float root1,root2;
    printf("Enter the quadratic expression:");
    scanf("%d %d %d",&a,&b,&c);
    discriminant=sqrt((b*b)-4*a*c);
    if (discriminant>0){
        root1=(-b+discriminant)/2*a;
        root2=(-b-discriminant)/2*a;
    }
    else if (discriminant==0){
        root1=(-b)/2*a;
        root2=root1;  
    }
    else{
        printf("The roots of the equation are imaginary");
        return 0;
    }
    printf("The roots of the QUADRATIC equations are:\nRoot 1=%0.3f\nRoot 2=%0.3f",root1,root2);
    return 0;
}