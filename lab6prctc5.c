
//A c program to print all negative elements in an array.

#include<stdio.h>
int main()
{
    int i;
    int ar[10];


    printf("Enter 10 elements in array:");
    for(i=0;i<5;i++)
    {
     scanf("%d",&ar[i]) ;
    }

    printf("All negative elements are:");
    for(i=0;i<10;i++)
    {
      if(ar[i]<0)
      {
          printf(" %d ",ar[i]);
      }
    }









}
