// A C++ program to subtract two matrices.
#include<iostream>
using namespace std;
int main()
{
    int matA[3][3], matB[3][3], matSub[3][3], i, j;
    cout<<"Enter 9 Elements for First Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matA[i][j];
    }
    cout<<"Enter 9 Elements for Second Matrix: ";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cin>>matB[i][j];
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            matSub[i][j] = matA[i][j] - matB[i][j];
    }
    cout<<"\nSubtraction Result is:\n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<matSub[i][j]<<"  ";
        cout<<endl;
    }

    return 0;
}
