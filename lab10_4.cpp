//A c++ program to change the value of a constant integer using pointers.

#include<iostream>
using namespace std;

int main()
{
    int a,*pa;

     a=60;
    cout<<"Address of a:"<<&a<<endl;
    cout<<"Value of a:"<<a<<endl<<endl;

    pa=&a;

     *pa=25;
     cout<<"Address of a:"<<&a<<endl;
    cout<<"Value of a:"<<a<<endl;
    return 0;
}


