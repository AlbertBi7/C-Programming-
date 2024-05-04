#include <stdio.h>
int main(){
    int i,n,count=1;
    char string[100];
    printf("Enter the string:");
    fgets(string,50,stdin);
    
    for (int i = 0; string[i] != '\0'; i++) {
    if (string[i] == ' '&&string[i+1]!=' ') {
      count++;
    }
  }
    printf("\nThe number of words in the string is %d",count);
    return 0;
}