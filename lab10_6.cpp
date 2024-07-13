// A c++ program to sort arrays using pointers and function.

#include<iostream>
using namespace std;

int sortarr(int *ptr)
{
    int i,j,t;

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(*(ptr+j)<*(ptr+i))
            {
                t=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=t;
            }
        }
    }
    cout<<"Sorting array is:"<<endl;
     for(int i=0;i<5;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;

}

int main()
{
    int arr[5]={2,56,23,12,54};
    cout<<"Element of the array:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
     cout<<endl<<endl;
     sortarr(arr);


    return 0;

}
