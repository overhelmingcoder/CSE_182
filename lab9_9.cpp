//A c++ program to add,subtract,multiply and divide two integers using  argument passed but no return value.
#include<iostream>
using namespace std;

int addition(int num1,int num2)
{
    int sum;

    sum=num1+num2;
    cout<<"Output:"<<sum;

}
int subtraction(int num1,int num2)
{
    int sub;
    sub=num1-num2;
    cout<<"Output:"<<sub;
}
int multipication(int num1,int num2)
{
    int mul;
    mul=num1*num2;
    cout<<"Output:"<<mul;
}
int dividetion(int num1,int num2)
{
    int div;

    div=num1/num2;
    cout<<"Output:"<<div;
}




int main()
{
    int var1, var2;
    cout<<"Enter number 1: "<<endl;
    cin>> var1;
    cout<<"Enter number 2: "<<endl;
    cin>> var2;

    char o;
    cout<<"Enter your operator:"<<endl;
    cin>>o;

    if(o=='+')
    {
        addition(var1, var2);
    }
     else if(o=='-')
    {
        subtraction(var1, var2);
    }
     else if(o=='*')
    {
        multipication(var1, var2);
    }
     else
    {
        dividetion(var1, var2);
    }



    return 0;
}
