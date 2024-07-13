
//A C++ PROGRAM TO FIND THE POSITION OF AN ELEMENT FROM THE LIST OF ELEMENTS.

#include<iostream>
using namespace std;

int main()
{
    int arr[100],n,i,to_search,loc;
    cout<<"the number of elements"<<endl;
    cin>>n;
    cout<<"Enter the numbers:"<<endl;
    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    cout<<"enter the searching element:";
    cin>>to_search;
    loc=false;

    for(i=0;i<n;i++){
        if(arr[i]==to_search)
        {
            loc=true;
            break;
        }
    }
    if(loc==true){
        cout<<"The element"<<to_search<<"is found at location:"<<i+1;
    }
    else{
        cout<<"The element"<<to_search<<"is not found in the list"<<endl;
    }

}
