//write a c program to find GCD of two number .
#include<stdio.h>
int main()
{
    int rem, temp1,temp2,num1,num2,GCD;
    printf("enter two number ");
    scanf("%d %d",&num1,&num2);
    temp1=num1;
    temp2=num2;
    while(temp2!= 0)
    {
        rem=temp1%temp2;
        temp1=temp2;
        temp2=rem;

    }
    GCD=temp1;
printf("GCD=%d ",GCD);

}
