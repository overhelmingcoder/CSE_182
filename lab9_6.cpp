//A c++ program to add,subtract,multiply and divide two integers using no argument passed and no return value.

#include<iostream>
using namespace std;

int addition()
{
    int num1,num2,sum;
    cout<<"Enter number 1:"<<endl;
    cin>>num1;
    cout<<"Enter number 2:"<<endl;
    cin>>num2;

    sum=num1+num2;
    cout<<"Output:"<<sum;

}
int subtraction()
{
    int num1,num2,sub;
    cout<<"Enter number 1:"<<endl;
    cin>>num1;
    cout<<"Enter number 2:"<<endl;
    cin>>num2;

    sub=num1-num2;
    cout<<"Output:"<<sub;
}
int multipication()
{
    int num1,num2,mul;
    cout<<"Enter number 1:"<<endl;
    cin>>num1;
    cout<<"Enter number 2:"<<endl;
    cin>>num2;

    mul=num1*num2;
    cout<<"Output:"<<mul;
}
int dividetion()
{
    int num1,num2,div;
    cout<<"Enter number 1:"<<endl;
    cin>>num1;
    cout<<"Enter number 2:"<<endl;
    cin>>num2;

    div=num1/num2;
    cout<<"Output:"<<div;
}




int main()
{

    char o;
    cout<<"Enter your operator:"<<endl;
    cin>>o;

    if(o=='+')
    {
        addition();
    }
     else if(o=='-')
    {
        subtraction();
    }
     else if(o=='*')
    {
        multipication();
    }
     else
    {
        dividetion();
    }



    return 0;
}
