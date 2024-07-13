
//A c++ program to add,subtract,multiply and divide two integers using  argument passed and a return value.

#include<iostream>
using namespace std;

int addition(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return sum;

}
int subtraction(int num1,int num2)
{
    int sub;
    sub=num1-num2;
    return sub;
}
int multipication(int num1,int num2)
{
    int mul;
    mul=num1*num2;
    return mul;
}
int dividetion(int num1,int num2)
{
    int div;
    div=num1/num2;
    return div;
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
        int a;
        a=addition(var1,var2);
        cout<<"Output:"<<a;
    }
    else if(o=='-')
    {
        int s;
        s=subtraction(var1,var2);
        cout<<"Output:"<<s;
    }
    else if(o=='*')
    {
        int m;
        m=multipication(var1,var2);
        cout<<"Output:"<<m;
    }
    else
    {
        int d;
        d=dividetion(var1,var2);
        cout<<"Output:"<<d;
    }



    return 0;
}

