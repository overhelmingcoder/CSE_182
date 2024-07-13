//A c program to find the reverse of an array.

#include<stdio.h>
int main()
{
    int a[5],b[5],i;

    printf("Enter the numbers:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The reverse array:");
    int n=5;
    for(i=0;i<n;i++)
    {
      a[i]=b[n-i];
    }
     for(i=0;i<5;i++)
    {
        printf("%d",&b[i]);
    }

}
