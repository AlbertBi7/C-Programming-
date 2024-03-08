#include <stdio.h>
int main() {
    int month;
    printf("Enter the Number of the month:");
    scanf("%d" ,&month);
    switch (month) {
        case 1:
        case 4:
        case 6:
        case 9:
        case 11:
        printf("The month has 31 days");
        break;
        case 2:
        printf("The month has 28 days");
        break;
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("The month March had 30 days");
        break;
        default:
        printf("The month does not exist");
    }
return 0;
}