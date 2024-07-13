// A c program to find the sum of n numbers using array.

#include<stdio.h>
int main()
{
    int a[5],b[5],sum=0,i,j;
    printf("Enter 5 values of 1st array:\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }


    printf("sum of n numbers\n");
    for(i=0; i<5; i++)
    {
        sum+=a[i];

    }
     printf("%d ",sum);


}
