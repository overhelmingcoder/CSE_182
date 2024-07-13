//write a c program to find LCM
#include<stdio.h>
int main()
{
    int i, temp1,temp2,num1,num2,GCD,LCM;
    printf("enter two number ");
    scanf("%d %d",&num1,&num2);
    temp1=num1;
    temp2=num2;
    while(temp2!= 0)
    {
        i=temp1%temp2;
        temp1=temp2;
        temp2=i;

    }
    GCD=temp1;
printf("LCM=%d ",(num1*num2)/GCD);


}

