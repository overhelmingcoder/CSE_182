
//  a C program to enter any number and calculate its factorial.

#include<stdio.h>
int main()
{
    int num,temp,result=1,i;
    printf("Enter your number:\n");
    scanf("%d",&num);
     temp=num;
    while(num!=0)
    {
      result=result*num;
        num--;
    }
    printf("The factorial value of %d is : %d",temp,result);


}
