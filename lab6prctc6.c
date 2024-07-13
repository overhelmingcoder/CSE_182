// A c program to count the total number of even and odd elements in an array.

#include<stdio.h>
int main()
{
    int a[10],i,evensum=0,oddsum=0;

    printf("Enter 10 numbers: ");
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }


    for(i=0; i<10; i++)
    {
        if(a[i]%2==0)
            evensum=evensum+a[i];
        else
            oddsum=oddsum+a[i];
    }

    printf("\nSum of odd values:%d\n",oddsum);
    printf("Sum of even values:%d",evensum);
}
