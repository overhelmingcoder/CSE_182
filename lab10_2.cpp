// A c++ program to demonstrate the relationship beween arrays and pointers.

#include<iostream>
using namespace std;
int main()
{
    int i,x[6],sum=0;
    cout<<"Enter 6 numbers:"<<endl;

    for(i=0;i<6;i++)
    {
        cin>>x[i];

        sum+= *(x+i);

    }
    cout<<"Sum="<<sum<<endl;
    return 0;
}
