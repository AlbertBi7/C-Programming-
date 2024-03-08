/*Create a C program that asks the user to enter a character. If the entered character
is a vowel (a, e, i, o, u), print "Vowel". Otherwise, print "Consonant".*/
#include <stdio.h>
int main() {
    char vowel;
    printf("Enter the letter:");
    scanf("%c" ,&vowel );
    switch(vowel){
        case 'a':
        printf("Letter is vowel-a");
        break;
        case 'e':
        printf("Letter is vowel-e");
        break;
        case 'i':
        printf("Letter is vowel-i");
        break;
        case 'o':
        printf("Letter is vowel-o");
        break;
        case 'u':
        printf("Letter is vowel-u");
        break;
        default:
        printf("Letter is a consonant");
    }
    return 0;
}



