//A C++ program to check whether two matrices are equal or not.

#include <iostream>
using namespace std;

#define size 3

int main()
{
    int A[size][size];
    int B[size][size];

    int row, col, isEqual;


    cout<<"Enter elements in matrix A of size "<<size<<" x "<<size<<endl;
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            cin>>A[row][col];
        }
    }


    cout<<"Enter elements in matrix B of size"<<size<<" x "<<size<<endl;
    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {
            cin>>B[row][col];
        }
    }


    isEqual = 1;

    for(row=0; row<size; row++)
    {
        for(col=0; col<size; col++)
        {

            if(A[row][col] != B[row][col])
            {
                isEqual = 0;
                break;
            }
        }
    }


    if(isEqual == 1)
    {
        cout<<"\nMatrix A is equal to Matrix B";
    }
    else
    {
        cout<<"\nMatrix A is not equal to Matrix B";
    }

    return 0;
}
