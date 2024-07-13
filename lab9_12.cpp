// A c++ program to find the reverse of an array using function.

#include<iostream>
using namespace std;

void reverse(int arr[7])
{
    cout<<"REVERSE:"<<endl;
    for(int i=6;i>=0;i--)
    {
        cout<<arr[i]<<" ";

    }
}

int main()
{
    int arr[7]={6,23,7,89,5,2,9};
    cout<<"Elements of the array is:"<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    reverse(arr);
    return 0;
}
