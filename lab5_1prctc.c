/*Write a C program to enter any number and check whether the number is
palindrome or not.*/
#include<stdio.h>
int main()
{
    int i,initial,num,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    initial=num;

    while (num != 0)
    {
        i=num%10;
        reverse=reverse*10+i;
        num=num/10;

    }
    if(initial==reverse)
    printf("The number %d is Palindrome",initial);
    else
     printf("your %d number is not Palindrome",initial);




}

