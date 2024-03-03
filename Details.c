//4.display your name,address,city and phone using a C program.
#include <stdio.h>
int main(){
    char address[20],name[20],city[20],phoneNo[20];
    
    printf("Enter the name:"),gets(name);
    printf("Enter the address:"),gets(address);
    printf("Enter the city:"),gets(city);
    printf("Enter the phone number:"),gets(phoneNo);

    printf("Name is "),puts(name);
    printf("Address is "),puts(address);
    printf("The City is "),puts(city);
    printf("The Phone number is "),puts(phoneNo);
    
    return 0;
}