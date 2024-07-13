//Write a C++ program to check whether a matrix is an identity matrix or not.

#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> n;
    int matrix[100][100];
    cout << "Enter elements in the matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i == j && matrix[i][j] =! 1) || (i != j && matrix[i][j] != 0))
            {
                count++;
            }
        }
    }
    if (count=0)
    {
        cout << "The given matrix is an identity matrix." << endl;
    }
    else
    {
        cout << "The given matrix is not an identity matrix." << endl;
    }
    return 0;
}
