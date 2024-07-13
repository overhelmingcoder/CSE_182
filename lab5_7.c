//write a c to enter any number and print its prime factors
#include<stdio.h>
int main()
{
    int i,x,num,count=0,temp;
    printf("enter any  number ");
    scanf("%d",&num);
    temp=num;
    for (i=2; i<temp; i++)
    {
        if(temp%i==0)
        {
            for(x=2; x<i; x++)
            {
                if(i%x == 0)
                {
                    count++;
                    break;
                }
            }
             if(count==0)
                {
                    printf("\n %d",i);
                }
        }

    }



}
