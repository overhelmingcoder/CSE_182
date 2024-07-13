//A c program to demonstrate the use of break statement.

#include<stdio.h>
void main ()
{
int i;
for(i = 0; i<10; ++i)
{
printf("%d \n",i);
if(i == 7)
break;
}
printf("came outside of loop i = %d",i);
}
