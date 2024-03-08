#include <stdio.h>
int main() {
    int value;
    float temp,degree;
    printf("1-Celcius to Farenheit\n2-Farenheit to Celsius\nEnter the value:");
    scanf("%int",&value);
    switch (value){
       case 1:
       printf("Enter the temperature:");
       scanf("%f",&temp);
       degree=(temp*9/5)+32;
       printf("The temperature in Farenheit is %f",degree);
       break;
       case 2:
       printf("Enter the temperature:");
       scanf("%f",&temp);
       degree=(temp-32)*5/9;
       printf("The temperature in Celsius is %f",degree);
       break;
       default:
       printf("INVALID INPUT");
    }
    return 0;
}