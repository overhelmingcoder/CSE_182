//A c program to demonstrate the use of continue statement.

#include<stdio.h>
void main()
{
    int i, n=15
    ;
    for(i=1; i<=n; ++i)
    {
        if(i % 5 == 0)
        {
            printf("pass\n");
            continue;
        }
        printf(" %d ",i);
    }
}
