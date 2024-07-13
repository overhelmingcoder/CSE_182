// a C program to calculate sum of digits of any number


#include<stdio.h>
int main()
{
    int num,sum=0,remain,temp,count=0;
    printf("Enter your number:\n");
    scanf("%d",&num);
    temp=num;

    while(temp!=0)
    {
       remain=temp%10;
       temp=temp/10;
       sum=remain+sum;
    }
    printf("The sum of digit=%d",sum);
}
