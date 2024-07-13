// Write a C program to print day of week name using switch case
#include<stdio.h>
int main()
{
    int day;
    printf("Enter Your Day Number");
    scanf("%d",&day);
    switch (day)
    {
    case 1 :
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3 :
        printf("monday");
        break;
    case 4 :
        printf("tuesday");
        break;
    case 5 :
        printf("wednasday");
        break;
    case 6 :
        printf("thurasday");
        break;
    case 7 :
        printf("friday");
        break;
    default :
        printf("unauthoraized");

    }


}
