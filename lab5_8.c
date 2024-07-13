//write a c program to check weather a number is strong number or not.
#include<stdio.h>
int main()
{
    int num,x;
    printf("Enter a number ");
    scanf("%d",&x) ;
    num=x;
    int   a,sum=0;
    while(num>0)
    {
        a=num%10;
        int fact=1;
        for(int i=a; i>=1; i--)
        {
            fact*=i;
        }
        sum+=fact;
        num/=10;
    }
    if(x==sum)
        printf("%d is a Strong Number\n",x);
      else
        printf("%d is not a strong number",x);
}
