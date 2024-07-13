#include<stdio.h>
int main()
{
    int i,sum=5;
    for(i=10  ;i<20 && sum<50;i++)
    {
        sum=sum+i;

        printf("i=%d and sum=%d\n",i,sum);
    }
      printf("\n\n value out of loop: i=%d and sum=%d\n",i,sum);
}
