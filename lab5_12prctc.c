//A c program to check whether an alphabet is vowel or consonant using switch case.

#include<stdio.h>
void main()
{
    char c;
    printf("Enter your Alphabet: ");
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
