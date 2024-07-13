//A c program to create a simple calculator using switch case.
#include<stdio.h>
int main()
{
    int n1,n2;
    char oper;
    printf("Enter a operator:");
    scanf("%c",&oper);
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);

    switch(oper)
    {
    case '+':
        printf("%d",n1+n2);
        break;
    case '-':
        printf("%d",n1-n2);
        break;
    case '*':
        printf("Multiplication=%d",n1*n2);
        break;
    case '/':
        printf("%f",(float)n1/n2);
        break;

    default:
        printf("Default");

    }
    return 0;
}


