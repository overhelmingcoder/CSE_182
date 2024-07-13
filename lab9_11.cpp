//a C++ program to get the largest element of an array using the function.

#include<iostream>
using namespace std;

void largest(int arr[9])
{
    int l=0;
    for(int i=0;i<9;i++)
    {
        if(arr[i]>l)
        {
            l=arr[i];
        }
    }
    cout<<endl;
    cout<<"The largest element:"<<l<<endl;
}

int main()
{
    int arr[9]={3,7,31,6,9,8,63,4,1};
    cout<<"Elements of he array is:"<<endl;
    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    largest(arr);
}
