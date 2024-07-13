
//a C++ program to delete an element from an array
#include<iostream>
using namespace std;
int main()
{
    int arr[10], tot=10, i, elem, j, found=0;
    cout<<"Enter 10 Array Elements: ";
    for(i=0; i<tot; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to Delete: ";
    cin>>elem;
    for(i=0; i<tot; i++)
    {
        if(arr[i]==elem)
        {
            for(j=i; j<(tot-1); j++)
                arr[j] = arr[j+1];
            found++;
            i--;
            tot--;
        }
    }
    if(found==0)
    cout<<"\nElement does not found in the Array!";
    else
        cout<<"\nElement Deleted Successfully!\n";
        cout <<"New Array:";
    for (i = 0; i <9; i++)
		cout <<arr[i] << " ";
    cout<<endl;
    return 0;
}
