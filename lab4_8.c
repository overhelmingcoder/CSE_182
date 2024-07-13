// a C program to enter any number and print its reverse.

#include<stdio.h>
int main()
{
    int num,rev=0,remain,temp,count=0;
    printf("Enter your number:\n");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
       remain=temp%10;
       temp=temp/10;
       rev=rev*10+remain;
    }
    printf("The reverse number is %d ",rev);
}
