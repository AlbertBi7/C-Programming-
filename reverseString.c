#include <stdio.h>
#include <string.h>
void reverse(char word[]);
int main(){
    char word[100];
    printf("Enter the word:");
    scanf("%s",&word);
    reverse(word);
}
void reverse(char word[]){
    char temp[100];
    int length=strlen(word);
     for (int i = 0; i < length/ 2; i++)
  {
    char ch = word[i];
    temp[i] = word[length - i - 1];
    temp[length - i - 1] = ch;
  }

   printf("The string is %s",temp);
}

