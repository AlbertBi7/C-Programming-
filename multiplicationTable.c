/*Table of a Number (n*i= n*I format to print the output)
Display the multiplication table of a given number using a while loop.
*/
#include <stdio.h>
int main(){
  int n,i=1;
  printf("Enter an integer: ");
  scanf("%d",&n);
  while (i<=10) {
    printf("%dx%d=%d\n",i,n,i*n);
    i++;
  }
  return 0;
}
