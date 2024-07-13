//A c++ program to add,subtract,multiply and divide two integers using no argument passed but  return value.

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
    return sum;

}
int subtraction()
{
    int num1,num2,sub;
    cout<<"Enter number 1:"<<endl;
    cin>>num1;
    cout<<"Enter number 2:"<<endl;
    cin>>num2;

    sub=num1-num2;
    return sub;
}
int multipication()
{
    int num1,num2,mul;
    cout<<"Enter number 1:"<<endl;
    cin>>num1;
    cout<<"Enter number 2:"<<endl;
    cin>>num2;

    mul=num1*num2;
    return mul;
}
int dividetion()
{
    int num1,num2,div;
    cout<<"Enter number 1:"<<endl;
    cin>>num1;
    cout<<"Enter number 2:"<<endl;
    cin>>num2;

    div=num1/num2;
    return div;
}




int main()
{

    char o;
    cout<<"Enter your operator:"<<endl;
    cin>>o;

    if(o=='+')
    {
        int a;
        a=addition();
        cout<<"Output:"<<a;
    }
     else if(o=='-')
    {
        int s;
        s=subtraction();
         cout<<"Output:"<<s;
    }
     else if(o=='*')
    {
        int m;
        m=multipication();
         cout<<"Output:"<<m;
    }
     else
    {
       int d;
        d=dividetion();
         cout<<"Output:"<<d;
    }



    return 0;
}

