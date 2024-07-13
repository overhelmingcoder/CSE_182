//A c program to print all the prime numbers between 1 to n.

#include<stdio.h>
int main()
{
    int n,j;
    printf("enter a number: ");
    scanf("%d",&n);
    for(j=2; j<=n; j++)
    {
        int i,count=0;
        for(i=2; i<j; i++)
        {
            if(j%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
            printf("% d ", j);

    }





}
