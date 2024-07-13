//A c++ program to demonstrate the working of pointers.

#include<iostream>
using namespace std;

int main()
{
    int *pc,c;

    c=22;
    cout<<"Address of c:"<<&c<<endl;
    cout<<"Value of c:"<<c<<endl<<endl;

    pc=&c;
    cout<<"Address of pointer:"<<pc<<endl;
    cout<<"Content of pointer pc:"<<*pc<<endl<<endl;

    c=20;
    cout<<"Address of pointer:"<<pc<<endl;
    cout<<"Content of pointer pc:"<<*pc<<endl<<endl;

    *pc=2;
    cout<<"Address of c:"<<&c<<endl;
    cout<<"Value of c:"<<c<<endl;

    return 0;
}
