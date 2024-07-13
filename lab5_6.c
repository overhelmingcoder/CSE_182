//write a c program to find sum of all prime number between 1 to n
#include<stdio.h>
int main()
{
    int n,j,sum=0;
    printf("enter a number ");
    scanf("%d",&n);
    for(j=1; j<=n; j++)
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
        {
            printf("%d\n", j);
            sum=sum+j;
        }
    }
    printf("sum of all prime number between 1 to %d is= %d",n,sum);





}

