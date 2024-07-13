// A C++ program to perform Scalar matrix multiplication.
#include<iostream>
using namespace std;

#define SIZE 3
int main()
{
    int A[SIZE][SIZE];
    int num, row, col;


   cout<<"Enter elements in matrix  ";
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
           cin>>A[row][col];
        }
    }


    cout<<"Enter any number to multiply with matrix A:";
    cin>>num;


    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {

            A[row][col] = num * A[row][col];
        }
    }


   cout<<"\nResultant matrix c.A = \n";
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
           cout<< A[row][col]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
