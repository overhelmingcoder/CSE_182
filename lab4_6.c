//c program to find the 1st digit and last digit of any number.

#include<stdio.h>
int main()
{
    int num,first,last,r,temp,count=0;
    printf("Enter your number:\n");
    scanf("%d",&num);
    first=num;
    last=num%10;
    while(first>=10)
    {
        first=first/10;
    }
    printf("The 1st digit and last digit of the number is: %d and %d ",first,last);
}
