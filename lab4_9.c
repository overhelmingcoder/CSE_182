// a C program to enter any number and print all factors of the number.

#include<stdio.h>
int main()
{
    int num,i;

    printf("ENter your number:\n");
    scanf("%d",&num);

    printf("Factors of %d are:\n");

    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf(" %d",i);
        }
    }
}
