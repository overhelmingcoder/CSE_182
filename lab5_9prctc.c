// A c program to print Fibonacci series up to n terms.

#include<stdio.h>
int main()
{
    int num,i;

    int f1=0,f2=1;
    int nextterm=f1+f2;

    printf("Enter your number:");
    scanf("%d",&num);

   printf("Fibonacci series: %d %d ",f1,f2);

   for(i=3;nextterm<=num;++i)
   {
    printf(" %d ", nextterm);
   f1=f2;
   f2=nextterm;
   nextterm=f1+f2;
   }

    }

