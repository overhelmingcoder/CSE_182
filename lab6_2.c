//A C Program for array traversing.
#include<stdio.h>

int main()
{
    char array[5],i;
    printf("Enter 5 character:");

    for(i=0; i<5; ++i)
    {
        scanf("%c",&array[i]);
    }
    printf("Displaying characters:");

    for(i=0; i<5; ++i)
    {
        printf("%c",array[i]);
    }
    return 0;
}

