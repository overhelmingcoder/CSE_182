// a C++ program to find the sum of two one-dimensional arrays using the function.

#include<iostream>
using namespace std;

void sum(int arr1[5],int arr2[7])
{
    int sum[10];
     for(int i=0;i<7;i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }
    cout<<endl<<"Sum of two array:"<<endl;
     for(int i=0;i<7;i++)
    {
        cout<<sum[i]<<" ";
    }

}

int main()
{
    int arr1[5]={1,3,5,7,6};
    int arr2[7]={5,7,3,45,89,32,1};

    cout<<"Elements are:"<<endl ;
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;


    sum(arr1,arr2);

}

