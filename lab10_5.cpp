// A c++ program to add two numbers using pointers.

#include<iostream>
using namespace std;

int main()
{
  int a,b;
  cout<<"Enter two numbers:"<<endl;
  cin>>a>>b;

  int *pa,*pb;
  pa=&a;
  pb=&b;

  int c=*pa+*pb;

  cout<<endl<<"Sum of two numbers:"<<c<<endl;


}
