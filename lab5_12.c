//write a c program to check wheather an alphabet is vowel or consonent
#include<stdio.h>
void main()
{
    char c;
    printf("Enter a character ");
    scanf("%c",&c);
    switch(c)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("VOWEL\n");
        break;
    default:
        printf("CONSONANT\n");
    }

}
