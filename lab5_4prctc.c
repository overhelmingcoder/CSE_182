//A C program to check whether a number is prime number or not.

#include<stdio.h>
int main()
{
    int num,i,count=0,x;
    printf("Enter a number:\n");
    scanf("%d",&num);

    x=num;
    if(num==0 || num==1)
    {
        count=1;
    }

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;

        }
    }


    if(count>0)
    {
        printf("%d is not a prime number.",x);
    }
    else
    {
        printf("%d is a prime number.",x);
    }
}
