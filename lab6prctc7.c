// A c program to count the total number of even and odd elements in an array.

#include<stdio.h>
int main()
{
    int a[10],i,evencount=0,oddcount=0;

    printf("Enter 10 numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0; i<10; i++)
    {
        if(a[i]%2==0)
            ++evencount;
        else
            ++oddcount;
              }

    printf("\n No of odd values:%d\n",oddcount);
    printf("No of even values:%d",evencount);
}

