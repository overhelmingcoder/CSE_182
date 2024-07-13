#include<stdio.h>
int main()
{
    double number,sum=0;
    //the body of the loop is excited at least once
    do{
        printf("enter a number ");
        scanf("%lf",&number);
        sum=sum+number;
    }
    while(number !=0);
    printf("sum=% .21lf ",sum);


}
