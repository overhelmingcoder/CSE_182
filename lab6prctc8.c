//a c program to copy all elements from one array to another array.
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5],i;



    for(i=0;i<5;i++)
    {
        b[i]=a[i];
        printf(" %d ",b[i]);
    }
}
