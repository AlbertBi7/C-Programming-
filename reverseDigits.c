/*Reverse a Number:
Reverse the digits of a given number using a while loop.*/
#include <stdio.h>
int main() {
  int n, revNumber=0, lastDigit;
  printf("Enter an integer: ");
  scanf("%d", &n);
  while (n!=0){
    lastDigit = n % 10;
    revNumber = revNumber * 10 + lastDigit;
    n /= 10;
  }
  printf("Reversed number = %d", revNumber);
  return 0;
}

