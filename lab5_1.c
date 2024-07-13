
//A c program to find a reverse of a number.
#include<stdio.h>
int main()
{
    int i,initial,num,reverse=0;
    printf("Enter a number ");
    scanf("%d",&num);
    initial=num;

    while (num != 0)
    {
        i=num%10;
        reverse=reverse*10+i;
        num=num/10;

    }
  printf("\nReverse number of %d is: %d",initial,reverse);

}
