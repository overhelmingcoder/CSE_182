//A c program to print total number of days in a month using switch case.

#include<stdio.h>
int main()
{
    int month;
    printf("Enter the  number of Month:");
    scanf("%d",&month);

    switch(month)
    {
    case 1:
    case 5:
    case 3:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 days");
        break;

    case 2:
        printf("28 days");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 days");
        break;

    default:
        printf("unknown month");


    }
}
