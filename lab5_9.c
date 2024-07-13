//fibonacco
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a Number");
    scanf("%d",&n);
    int num1=0;
   int  num2=1;
    for(i=0;i<=n;i++)
    {
        sum=sum+num1;
        num1=num2;
        num2=sum;
        printf("%d     ",sum);
    }
}
